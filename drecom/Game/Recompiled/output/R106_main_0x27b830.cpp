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

// Function: R106_main
// Address: 0x27b830 - 0x27ba70
void R106_main_0x27b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R106_main_0x27b830");
#endif

    switch (ctx->pc) {
        case 0x27b858u: goto label_27b858;
        case 0x27b860u: goto label_27b860;
        case 0x27b8ecu: goto label_27b8ec;
        case 0x27b9a8u: goto label_27b9a8;
        case 0x27b9d0u: goto label_27b9d0;
        case 0x27ba58u: goto label_27ba58;
        default: break;
    }

    ctx->pc = 0x27b830u;

    // 0x27b830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27b834: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x27b834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x27b838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27b838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27b83c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27b83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27b840: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27b840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27b844: 0x8c30f9ec  lw          $s0, -0x614($at)
    ctx->pc = 0x27b844u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x27b848: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x27b848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x27b84c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x27b84cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x27b850: 0xc09ee9c  jal         func_27BA70
    ctx->pc = 0x27B850u;
    SET_GPR_U32(ctx, 31, 0x27B858u);
    ctx->pc = 0x27BA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA70u, 0x27B850u, 0x27B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B858u;
label_27b858:
    // 0x27b858: 0xc09f52c  jal         func_27D4B0
    ctx->pc = 0x27B858u;
    SET_GPR_U32(ctx, 31, 0x27B860u);
    ctx->pc = 0x27D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D4B0u, 0x27B858u, 0x27B860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B860u;
label_27b860:
    // 0x27b860: 0x8e241a20  lw          $a0, 0x1A20($s1)
    ctx->pc = 0x27b860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6688)));
    // 0x27b864: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x27b864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x27b868: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27b868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27b86c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x27B86Cu;
    {
        const bool branch_taken_0x27b86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b86c) {
            ctx->pc = 0x27B8F4u;
            goto label_27b8f4;
        }
    }
    ctx->pc = 0x27B874u;
    // 0x27b874: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27b874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27b878: 0x8c231b30  lw          $v1, 0x1B30($at)
    ctx->pc = 0x27b878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B30u));
    // 0x27b87c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27b880: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27b880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27b884: 0xac231b30  sw          $v1, 0x1B30($at)
    ctx->pc = 0x27b884u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x621B30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B30u, _value); } while (0);
    // 0x27b888: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27b888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27b88c: 0x8c231b30  lw          $v1, 0x1B30($at)
    ctx->pc = 0x27b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621B30u));
    // 0x27b890: 0x2c61001f  sltiu       $at, $v1, 0x1F
    ctx->pc = 0x27b890u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x27b894: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x27B894u;
    {
        const bool branch_taken_0x27b894 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b894) {
            ctx->pc = 0x27B8FCu;
            goto label_27b8fc;
        }
    }
    ctx->pc = 0x27B89Cu;
    // 0x27b89c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b8a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b8a4: 0xa022de11  sb          $v0, -0x21EF($at)
    ctx->pc = 0x27b8a4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CDE11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CDE11u, _value); } while (0);
    // 0x27b8a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b8ac: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27b8b0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x27b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x27b8b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27b8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27b8b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b8bc: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27b8bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27b8c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b8c4: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27b8c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27b8cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27b8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27b8d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b8d4: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27b8d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27b8d8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27b8dc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27b8e0: 0x2445c440  addiu       $a1, $v0, -0x3BC0
    ctx->pc = 0x27b8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952000));
    // 0x27b8e4: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27B8E4u;
    SET_GPR_U32(ctx, 31, 0x27B8ECu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27B8E4u, 0x27B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B8ECu;
label_27b8ec:
    // 0x27b8ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x27B8ECu;
    {
        const bool branch_taken_0x27b8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b8ec) {
            ctx->pc = 0x27B8FCu;
            goto label_27b8fc;
        }
    }
    ctx->pc = 0x27B8F4u;
label_27b8f4:
    // 0x27b8f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27b8f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27b8f8: 0xac201b30  sw          $zero, 0x1B30($at)
    ctx->pc = 0x27b8f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621B30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621B30u, _value); } while (0);
label_27b8fc:
    // 0x27b8fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b900: 0x8c241a9c  lw          $a0, 0x1A9C($at)
    ctx->pc = 0x27b900u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27b904: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27b904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x27b908: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27b908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27b90c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x27B90Cu;
    {
        const bool branch_taken_0x27b90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b90c) {
            ctx->pc = 0x27B9E8u;
            goto label_27b9e8;
        }
    }
    ctx->pc = 0x27B914u;
    // 0x27b914: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b918: 0x8c241aa0  lw          $a0, 0x1AA0($at)
    ctx->pc = 0x27b918u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA0u));
    // 0x27b91c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x27b920: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27b920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27b924: 0x14600030  bnez        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x27B924u;
    {
        const bool branch_taken_0x27b924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b924) {
            ctx->pc = 0x27B9E8u;
            goto label_27b9e8;
        }
    }
    ctx->pc = 0x27B92Cu;
    // 0x27b92c: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27b92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b930: 0x3c034692  lui         $v1, 0x4692
    ctx->pc = 0x27b930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18066 << 16));
    // 0x27b934: 0x3463cc00  ori         $v1, $v1, 0xCC00
    ctx->pc = 0x27b934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52224);
    // 0x27b938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27b938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b93c: 0x0  nop
    ctx->pc = 0x27b93cu;
    // NOP
    // 0x27b940: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x27b940u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27b944: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x27b944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x27b948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27b948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b94c: 0x0  nop
    ctx->pc = 0x27b94cu;
    // NOP
    // 0x27b950: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27b950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27b954: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27b954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27b958: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x27b958u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b95c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27b95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27b960: 0x0  nop
    ctx->pc = 0x27b960u;
    // NOP
    // 0x27b964: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x27B964u;
    {
        const bool branch_taken_0x27b964 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27b964) {
            ctx->pc = 0x27B9E8u;
            goto label_27b9e8;
        }
    }
    ctx->pc = 0x27B96Cu;
    // 0x27b96c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b970: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27b970u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27b974: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x27b974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x27b978: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27b978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27b97c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27b97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27b980: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b984: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27b984u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27b988: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b98c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x27b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x27b990: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x27b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x27b994: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27B994u;
    {
        const bool branch_taken_0x27b994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b994) {
            ctx->pc = 0x27B9B0u;
            goto label_27b9b0;
        }
    }
    ctx->pc = 0x27B99Cu;
    // 0x27b99c: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x27b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x27b9a0: 0xc062010  jal         func_188040
    ctx->pc = 0x27B9A0u;
    SET_GPR_U32(ctx, 31, 0x27B9A8u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x27B9A0u, 0x27B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9A8u;
label_27b9a8:
    // 0x27b9a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27B9A8u;
    {
        const bool branch_taken_0x27b9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b9a8) {
            ctx->pc = 0x27B9E8u;
            goto label_27b9e8;
        }
    }
    ctx->pc = 0x27B9B0u;
label_27b9b0:
    // 0x27b9b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b9b4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x27b9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x27b9b8: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x27b9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x27b9bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b9c0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x27b9c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x27b9c4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x27b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x27b9c8: 0xc062010  jal         func_188040
    ctx->pc = 0x27B9C8u;
    SET_GPR_U32(ctx, 31, 0x27B9D0u);
    ctx->pc = 0x188040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188040u, 0x27B9C8u, 0x27B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B9D0u;
label_27b9d0:
    // 0x27b9d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b9d4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x27b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x27b9d8: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x27b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x27b9dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27b9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27b9e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b9e4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x27b9e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_27b9e8:
    // 0x27b9e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b9ec: 0x8c241a9c  lw          $a0, 0x1A9C($at)
    ctx->pc = 0x27b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27b9f0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x27b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x27b9f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27b9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27b9f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x27B9F8u;
    {
        const bool branch_taken_0x27b9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b9f8) {
            ctx->pc = 0x27BA38u;
            goto label_27ba38;
        }
    }
    ctx->pc = 0x27BA00u;
    // 0x27ba00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ba00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ba04: 0x8c241aa0  lw          $a0, 0x1AA0($at)
    ctx->pc = 0x27ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AA0u));
    // 0x27ba08: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x27ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x27ba0c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27ba0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27ba10: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x27BA10u;
    {
        const bool branch_taken_0x27ba10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ba10) {
            ctx->pc = 0x27BA38u;
            goto label_27ba38;
        }
    }
    ctx->pc = 0x27BA18u;
    // 0x27ba18: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27ba18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27ba1c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x27ba1cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ba20: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x27ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x27ba24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27ba24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ba28: 0x0  nop
    ctx->pc = 0x27ba28u;
    // NOP
    // 0x27ba2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27ba2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ba30: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27ba30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27ba34: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x27ba34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
label_27ba38:
    // 0x27ba38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ba38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ba3c: 0x8c241ae4  lw          $a0, 0x1AE4($at)
    ctx->pc = 0x27ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x27ba40: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x27ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x27ba44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27ba44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27ba48: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BA48u;
    {
        const bool branch_taken_0x27ba48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ba48) {
            ctx->pc = 0x27BA58u;
            goto label_27ba58;
        }
    }
    ctx->pc = 0x27BA50u;
    // 0x27ba50: 0xc09f738  jal         func_27DCE0
    ctx->pc = 0x27BA50u;
    SET_GPR_U32(ctx, 31, 0x27BA58u);
    ctx->pc = 0x27DCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCE0u, 0x27BA50u, 0x27BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA58u;
label_27ba58:
    // 0x27ba58: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x27ba58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ba5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27ba5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ba60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ba60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ba64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27ba64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ba68: 0x3e00008  jr          $ra
    ctx->pc = 0x27BA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BA70u;
}
