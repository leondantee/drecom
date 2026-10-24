#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: R100_init
// Address: 0x282a10 - 0x282bdc
void R100_init_0x282a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R100_init_0x282a10");
#endif

    switch (ctx->pc) {
        case 0x282a24u: goto label_282a24;
        case 0x282a34u: goto label_282a34;
        case 0x282bc8u: goto label_282bc8;
        default: break;
    }

    ctx->pc = 0x282a10u;

    // 0x282a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x282a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x282a14: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x282a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x282a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282a1c: 0xc0a0c20  jal         func_283080
    ctx->pc = 0x282A1Cu;
    SET_GPR_U32(ctx, 31, 0x282A24u);
    ctx->pc = 0x283080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283080u, 0x282A1Cu, 0x282A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A24u;
label_282a24:
    // 0x282a24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x282a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x282a28: 0x24445350  addiu       $a0, $v0, 0x5350
    ctx->pc = 0x282a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21328));
    // 0x282a2c: 0xc0a103c  jal         func_2840F0
    ctx->pc = 0x282A2Cu;
    SET_GPR_U32(ctx, 31, 0x282A34u);
    ctx->pc = 0x2840F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840F0u, 0x282A2Cu, 0x282A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A34u;
label_282a34:
    // 0x282a34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282a38: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x282a38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x282a3c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x282a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x282a40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x282a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x282a44: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x282A44u;
    {
        const bool branch_taken_0x282a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282a44) {
            ctx->pc = 0x282A88u;
            goto label_282a88;
        }
    }
    ctx->pc = 0x282A4Cu;
    // 0x282a4c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282a50: 0x8c30f9e0  lw          $s0, -0x620($at)
    ctx->pc = 0x282a50u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x282a54: 0x3c02c4af  lui         $v0, 0xC4AF
    ctx->pc = 0x282a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50351 << 16));
    // 0x282a58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x282a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282a5c: 0x0  nop
    ctx->pc = 0x282a5cu;
    // NOP
    // 0x282a60: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x282a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x282a64: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x282a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x282a68: 0x24423650  addiu       $v0, $v0, 0x3650
    ctx->pc = 0x282a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13904));
    // 0x282a6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282a70: 0xac22dc3c  sw          $v0, -0x23C4($at)
    ctx->pc = 0x282a70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDC3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDC3Cu, _value); } while (0);
    // 0x282a74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x282a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282a78: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282a7c: 0xac221b90  sw          $v0, 0x1B90($at)
    ctx->pc = 0x282a7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B90u, _value); } while (0);
    // 0x282a80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x282A80u;
    {
        const bool branch_taken_0x282a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282a80) {
            ctx->pc = 0x282A9Cu;
            goto label_282a9c;
        }
    }
    ctx->pc = 0x282A88u;
label_282a88:
    // 0x282a88: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282a8c: 0xac20dc3c  sw          $zero, -0x23C4($at)
    ctx->pc = 0x282a8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CDC3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDC3Cu, _value); } while (0);
    // 0x282a90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x282a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x282a94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x282a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x282a98: 0xac221b90  sw          $v0, 0x1B90($at)
    ctx->pc = 0x282a98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B90u, _value); } while (0);
label_282a9c:
    // 0x282a9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282aa0: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x282aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x282aa4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x282aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x282aa8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x282aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x282aac: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x282AACu;
    {
        const bool branch_taken_0x282aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282aac) {
            ctx->pc = 0x282AFCu;
            goto label_282afc;
        }
    }
    ctx->pc = 0x282AB4u;
    // 0x282ab4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x282ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x282ab8: 0x24423340  addiu       $v0, $v0, 0x3340
    ctx->pc = 0x282ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13120));
    // 0x282abc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282ac0: 0xac22dafc  sw          $v0, -0x2504($at)
    ctx->pc = 0x282ac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDAFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDAFCu, _value); } while (0);
    // 0x282ac4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x282ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x282ac8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282acc: 0xac22daf8  sw          $v0, -0x2508($at)
    ctx->pc = 0x282accu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDAF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDAF8u, _value); } while (0);
    // 0x282ad0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x282ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x282ad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282ad8: 0xa022daf1  sb          $v0, -0x250F($at)
    ctx->pc = 0x282ad8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDAF1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDAF1u, _value); } while (0);
    // 0x282adc: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x282adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x282ae0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282ae4: 0xa022daf3  sb          $v0, -0x250D($at)
    ctx->pc = 0x282ae4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDAF3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDAF3u, _value); } while (0);
    // 0x282ae8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282aec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282af0: 0xa022d411  sb          $v0, -0x2BEF($at)
    ctx->pc = 0x282af0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD411u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD411u, _value); } while (0);
    // 0x282af4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x282AF4u;
    {
        const bool branch_taken_0x282af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282af4) {
            ctx->pc = 0x282B08u;
            goto label_282b08;
        }
    }
    ctx->pc = 0x282AFCu;
label_282afc:
    // 0x282afc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282b00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b04: 0xa022daf1  sb          $v0, -0x250F($at)
    ctx->pc = 0x282b04u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDAF1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDAF1u, _value); } while (0);
label_282b08:
    // 0x282b08: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b0c: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x282b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x282b10: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x282b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x282b14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x282b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x282b18: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x282B18u;
    {
        const bool branch_taken_0x282b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282b18) {
            ctx->pc = 0x282B68u;
            goto label_282b68;
        }
    }
    ctx->pc = 0x282B20u;
    // 0x282b20: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x282b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x282b24: 0x24423390  addiu       $v0, $v0, 0x3390
    ctx->pc = 0x282b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
    // 0x282b28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b2c: 0xac22db9c  sw          $v0, -0x2464($at)
    ctx->pc = 0x282b2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDB9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDB9Cu, _value); } while (0);
    // 0x282b30: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x282b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x282b34: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b38: 0xac22db98  sw          $v0, -0x2468($at)
    ctx->pc = 0x282b38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDB98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CDB98u, _value); } while (0);
    // 0x282b3c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x282b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x282b40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b44: 0xa022db91  sb          $v0, -0x246F($at)
    ctx->pc = 0x282b44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDB91u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDB91u, _value); } while (0);
    // 0x282b48: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x282b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x282b4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b50: 0xa022db93  sb          $v0, -0x246D($at)
    ctx->pc = 0x282b50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDB93u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDB93u, _value); } while (0);
    // 0x282b54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282b58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b5c: 0xa022d4b1  sb          $v0, -0x2B4F($at)
    ctx->pc = 0x282b5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x282b60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x282B60u;
    {
        const bool branch_taken_0x282b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282b60) {
            ctx->pc = 0x282B74u;
            goto label_282b74;
        }
    }
    ctx->pc = 0x282B68u;
label_282b68:
    // 0x282b68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282b6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b70: 0xa022db91  sb          $v0, -0x246F($at)
    ctx->pc = 0x282b70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDB91u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDB91u, _value); } while (0);
label_282b74:
    // 0x282b74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x282b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282b78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b7c: 0xa022d5f1  sb          $v0, -0x2A0F($at)
    ctx->pc = 0x282b7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD5F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F1u, _value); } while (0);
    // 0x282b80: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x282b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x282b84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b88: 0xa022d5f3  sb          $v0, -0x2A0D($at)
    ctx->pc = 0x282b88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD5F3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F3u, _value); } while (0);
    // 0x282b8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282b90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b94: 0xa422d5f8  sh          $v0, -0x2A08($at)
    ctx->pc = 0x282b94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD5F8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5F8u, _value); } while (0);
    // 0x282b98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b9c: 0xa420d5fa  sh          $zero, -0x2A06($at)
    ctx->pc = 0x282b9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD5FAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5FAu, _value); } while (0);
    // 0x282ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282ba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282ba8: 0xa422d5fc  sh          $v0, -0x2A04($at)
    ctx->pc = 0x282ba8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD5FCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5FCu, _value); } while (0);
    // 0x282bac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282bb0: 0xa420d5fe  sh          $zero, -0x2A02($at)
    ctx->pc = 0x282bb0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD5FEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5FEu, _value); } while (0);
    // 0x282bb4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x282bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x282bb8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x282bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x282bbc: 0x244535c0  addiu       $a1, $v0, 0x35C0
    ctx->pc = 0x282bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13760));
    // 0x282bc0: 0xc0848cc  jal         func_212330
    ctx->pc = 0x282BC0u;
    SET_GPR_U32(ctx, 31, 0x282BC8u);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x282BC0u, 0x282BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282BC8u;
label_282bc8:
    // 0x282bc8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x282bc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282bcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282bd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x282bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x282bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x282BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282BDCu;
}
