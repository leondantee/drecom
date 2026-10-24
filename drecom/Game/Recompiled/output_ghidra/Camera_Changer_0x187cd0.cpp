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

// Function: Camera_Changer
// Address: 0x187cd0 - 0x188034
void Camera_Changer_0x187cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_Changer_0x187cd0");
#endif

    switch (ctx->pc) {
        case 0x187f28u: goto label_187f28;
        case 0x187f3cu: goto label_187f3c;
        case 0x187f50u: goto label_187f50;
        case 0x187f64u: goto label_187f64;
        case 0x187f78u: goto label_187f78;
        case 0x187f8cu: goto label_187f8c;
        case 0x187fa0u: goto label_187fa0;
        case 0x187fb4u: goto label_187fb4;
        case 0x187fc8u: goto label_187fc8;
        case 0x187fdcu: goto label_187fdc;
        case 0x187ff0u: goto label_187ff0;
        case 0x188000u: goto label_188000;
        default: break;
    }

    ctx->pc = 0x187cd0u;

    // 0x187cd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x187cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x187cd4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x187cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x187cd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x187cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x187cdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x187cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x187ce0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187ce4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x187ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x187ce8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x187ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x187cec: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x187cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x187cf0: 0x24702380  addiu       $s0, $v1, 0x2380
    ctx->pc = 0x187cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 9088));
    // 0x187cf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187cf8: 0x8c241a40  lw          $a0, 0x1A40($at)
    ctx->pc = 0x187cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x187cfc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x187cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x187d00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187d00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187d04: 0x146000c3  bnez        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x187D04u;
    {
        const bool branch_taken_0x187d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x187d04) {
            ctx->pc = 0x188014u;
            goto label_188014;
        }
    }
    ctx->pc = 0x187D0Cu;
    // 0x187d0c: 0x8e040168  lw          $a0, 0x168($s0)
    ctx->pc = 0x187d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x187d10: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x187d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x187d14: 0x108300bf  beq         $a0, $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x187D14u;
    {
        const bool branch_taken_0x187d14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x187d14) {
            ctx->pc = 0x188014u;
            goto label_188014;
        }
    }
    ctx->pc = 0x187D1Cu;
    // 0x187d1c: 0x8fb10058  lw          $s1, 0x58($sp)
    ctx->pc = 0x187d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x187d20: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187d24: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x187d24u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x187d28: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x187d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x187d2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x187d2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x187d30: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x187d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x187d34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187d38: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187d3c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187d40: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187d44: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x187d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187d48: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x187d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x187d4c: 0x3c02beff  lui         $v0, 0xBEFF
    ctx->pc = 0x187d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48895 << 16));
    // 0x187d50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x187d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x187d54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x187d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x187d58: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x187d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x187d5c: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x187d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x187d60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x187d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187d64: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x187D64u;
    {
        const bool branch_taken_0x187d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x187d64) {
            ctx->pc = 0x187DA4u;
            goto label_187da4;
        }
    }
    ctx->pc = 0x187D6Cu;
    // 0x187d6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187d70: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187d70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187d74: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x187d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x187d78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x187d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x187d7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x187D7Cu;
    {
        const bool branch_taken_0x187d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d7c) {
            ctx->pc = 0x187D94u;
            goto label_187d94;
        }
    }
    ctx->pc = 0x187D84u;
    // 0x187d84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187d88: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x187d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x187d8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x187D8Cu;
    {
        const bool branch_taken_0x187d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d8c) {
            ctx->pc = 0x187DD0u;
            goto label_187dd0;
        }
    }
    ctx->pc = 0x187D94u;
label_187d94:
    // 0x187d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187d98: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x187d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x187d9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x187D9Cu;
    {
        const bool branch_taken_0x187d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d9c) {
            ctx->pc = 0x187DD0u;
            goto label_187dd0;
        }
    }
    ctx->pc = 0x187DA4u;
label_187da4:
    // 0x187da4: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x187da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x187da8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x187da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x187dac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187db0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187db4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187db8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187dbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187dc0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x187dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x187dc4: 0x904200d0  lbu         $v0, 0xD0($v0)
    ctx->pc = 0x187dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x187dc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x187dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x187dcc: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x187dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_187dd0:
    // 0x187dd0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x187dd4: 0xc420ef40  lwc1        $f0, -0x10C0($at)
    ctx->pc = 0x187dd4u;
    { uint32_t bits = FAST_READ32(0x3EEF40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187dd8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187ddc: 0xe4200370  swc1        $f0, 0x370($at)
    ctx->pc = 0x187ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480370u, _value); } while (0); }
    // 0x187de0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x187de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x187de4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x187de4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x187de8: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x187DE8u;
    {
        const bool branch_taken_0x187de8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x187de8) {
            ctx->pc = 0x187E30u;
            goto label_187e30;
        }
    }
    ctx->pc = 0x187DF0u;
    // 0x187df0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x187df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x187df4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x187df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x187df8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187dfc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187e00: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187e04: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x187e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187e08: 0x8c830158  lw          $v1, 0x158($a0)
    ctx->pc = 0x187e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x187e0c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x187e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x187e10: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x187e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x187e14: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x187e14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x187e18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187e1c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x187e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x187e20: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x187e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x187e24: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x187e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x187e28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187e2c: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x187e2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
label_187e30:
    // 0x187e30: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x187e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x187e34: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x187e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x187e38: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187e3c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187e40: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187e44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187e48: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x187e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x187e4c: 0x305207ff  andi        $s2, $v0, 0x7FF
    ctx->pc = 0x187e4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x187e50: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x187e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x187e54: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x187e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x187e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187e5c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x187e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x187e60: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x187e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x187e64: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x187e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x187e68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x187e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x187e6c: 0x8c420158  lw          $v0, 0x158($v0)
    ctx->pc = 0x187e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x187e70: 0x305307ff  andi        $s3, $v0, 0x7FF
    ctx->pc = 0x187e70u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x187e74: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x187e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x187e78: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x187e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x187e7c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x187E7Cu;
    {
        const bool branch_taken_0x187e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x187e7c) {
            ctx->pc = 0x187E90u;
            goto label_187e90;
        }
    }
    ctx->pc = 0x187E84u;
    // 0x187e84: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x187e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x187e88: 0x12530059  beq         $s2, $s3, . + 4 + (0x59 << 2)
    ctx->pc = 0x187E88u;
    {
        const bool branch_taken_0x187e88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x187e88) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187E90u;
label_187e90:
    // 0x187e90: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x187e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x187e94: 0x12420053  beq         $s2, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x187E94u;
    {
        const bool branch_taken_0x187e94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187e94) {
            ctx->pc = 0x187FE4u;
            goto label_187fe4;
        }
    }
    ctx->pc = 0x187E9Cu;
    // 0x187e9c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x187e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x187ea0: 0x1242004b  beq         $s2, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x187EA0u;
    {
        const bool branch_taken_0x187ea0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187ea0) {
            ctx->pc = 0x187FD0u;
            goto label_187fd0;
        }
    }
    ctx->pc = 0x187EA8u;
    // 0x187ea8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x187ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x187eac: 0x12420043  beq         $s2, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x187EACu;
    {
        const bool branch_taken_0x187eac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187eac) {
            ctx->pc = 0x187FBCu;
            goto label_187fbc;
        }
    }
    ctx->pc = 0x187EB4u;
    // 0x187eb4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x187eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x187eb8: 0x1242003b  beq         $s2, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x187EB8u;
    {
        const bool branch_taken_0x187eb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187eb8) {
            ctx->pc = 0x187FA8u;
            goto label_187fa8;
        }
    }
    ctx->pc = 0x187EC0u;
    // 0x187ec0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x187ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x187ec4: 0x12420033  beq         $s2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x187EC4u;
    {
        const bool branch_taken_0x187ec4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187ec4) {
            ctx->pc = 0x187F94u;
            goto label_187f94;
        }
    }
    ctx->pc = 0x187ECCu;
    // 0x187ecc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x187eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x187ed0: 0x1242002b  beq         $s2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x187ED0u;
    {
        const bool branch_taken_0x187ed0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187ed0) {
            ctx->pc = 0x187F80u;
            goto label_187f80;
        }
    }
    ctx->pc = 0x187ED8u;
    // 0x187ed8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x187ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x187edc: 0x12420023  beq         $s2, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x187EDCu;
    {
        const bool branch_taken_0x187edc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187edc) {
            ctx->pc = 0x187F6Cu;
            goto label_187f6c;
        }
    }
    ctx->pc = 0x187EE4u;
    // 0x187ee4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x187ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x187ee8: 0x1242001b  beq         $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x187EE8u;
    {
        const bool branch_taken_0x187ee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187ee8) {
            ctx->pc = 0x187F58u;
            goto label_187f58;
        }
    }
    ctx->pc = 0x187EF0u;
    // 0x187ef0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x187ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x187ef4: 0x12420013  beq         $s2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x187EF4u;
    {
        const bool branch_taken_0x187ef4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187ef4) {
            ctx->pc = 0x187F44u;
            goto label_187f44;
        }
    }
    ctx->pc = 0x187EFCu;
    // 0x187efc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x187efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x187f00: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x187F00u;
    {
        const bool branch_taken_0x187f00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187f00) {
            ctx->pc = 0x187F30u;
            goto label_187f30;
        }
    }
    ctx->pc = 0x187F08u;
    // 0x187f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187f0c: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x187F0Cu;
    {
        const bool branch_taken_0x187f0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x187f0c) {
            ctx->pc = 0x187F1Cu;
            goto label_187f1c;
        }
    }
    ctx->pc = 0x187F14u;
    // 0x187f14: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x187F14u;
    {
        const bool branch_taken_0x187f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f14) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187F1Cu;
label_187f1c:
    // 0x187f1c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x187f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x187f20: 0xc061014  jal         func_184050
    ctx->pc = 0x187F20u;
    SET_GPR_U32(ctx, 31, 0x187F28u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F20u, 0x187F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F28u;
label_187f28:
    // 0x187f28: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x187F28u;
    {
        const bool branch_taken_0x187f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f28) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187F30u;
label_187f30:
    // 0x187f30: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x187f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x187f34: 0xc061014  jal         func_184050
    ctx->pc = 0x187F34u;
    SET_GPR_U32(ctx, 31, 0x187F3Cu);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F34u, 0x187F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F3Cu;
label_187f3c:
    // 0x187f3c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x187F3Cu;
    {
        const bool branch_taken_0x187f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f3c) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187F44u;
label_187f44:
    // 0x187f44: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x187f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x187f48: 0xc061014  jal         func_184050
    ctx->pc = 0x187F48u;
    SET_GPR_U32(ctx, 31, 0x187F50u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F48u, 0x187F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F50u;
label_187f50:
    // 0x187f50: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x187F50u;
    {
        const bool branch_taken_0x187f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f50) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187F58u;
label_187f58:
    // 0x187f58: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x187f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x187f5c: 0xc061014  jal         func_184050
    ctx->pc = 0x187F5Cu;
    SET_GPR_U32(ctx, 31, 0x187F64u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F5Cu, 0x187F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F64u;
label_187f64:
    // 0x187f64: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x187F64u;
    {
        const bool branch_taken_0x187f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f64) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187F6Cu;
label_187f6c:
    // 0x187f6c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x187f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x187f70: 0xc061014  jal         func_184050
    ctx->pc = 0x187F70u;
    SET_GPR_U32(ctx, 31, 0x187F78u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F70u, 0x187F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F78u;
label_187f78:
    // 0x187f78: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x187F78u;
    {
        const bool branch_taken_0x187f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f78) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187F80u;
label_187f80:
    // 0x187f80: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x187f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x187f84: 0xc061014  jal         func_184050
    ctx->pc = 0x187F84u;
    SET_GPR_U32(ctx, 31, 0x187F8Cu);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F84u, 0x187F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187F8Cu;
label_187f8c:
    // 0x187f8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x187F8Cu;
    {
        const bool branch_taken_0x187f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187f8c) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187F94u;
label_187f94:
    // 0x187f94: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x187f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x187f98: 0xc061014  jal         func_184050
    ctx->pc = 0x187F98u;
    SET_GPR_U32(ctx, 31, 0x187FA0u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187F98u, 0x187FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FA0u;
label_187fa0:
    // 0x187fa0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x187FA0u;
    {
        const bool branch_taken_0x187fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fa0) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187FA8u;
label_187fa8:
    // 0x187fa8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x187fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x187fac: 0xc061014  jal         func_184050
    ctx->pc = 0x187FACu;
    SET_GPR_U32(ctx, 31, 0x187FB4u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187FACu, 0x187FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FB4u;
label_187fb4:
    // 0x187fb4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x187FB4u;
    {
        const bool branch_taken_0x187fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fb4) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187FBCu;
label_187fbc:
    // 0x187fbc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x187fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x187fc0: 0xc061014  jal         func_184050
    ctx->pc = 0x187FC0u;
    SET_GPR_U32(ctx, 31, 0x187FC8u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187FC0u, 0x187FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FC8u;
label_187fc8:
    // 0x187fc8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x187FC8u;
    {
        const bool branch_taken_0x187fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fc8) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187FD0u;
label_187fd0:
    // 0x187fd0: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x187fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x187fd4: 0xc061014  jal         func_184050
    ctx->pc = 0x187FD4u;
    SET_GPR_U32(ctx, 31, 0x187FDCu);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187FD4u, 0x187FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FDCu;
label_187fdc:
    // 0x187fdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x187FDCu;
    {
        const bool branch_taken_0x187fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187fdc) {
            ctx->pc = 0x187FF0u;
            goto label_187ff0;
        }
    }
    ctx->pc = 0x187FE4u;
label_187fe4:
    // 0x187fe4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x187fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x187fe8: 0xc061014  jal         func_184050
    ctx->pc = 0x187FE8u;
    SET_GPR_U32(ctx, 31, 0x187FF0u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187FE8u, 0x187FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187FF0u;
label_187ff0:
    // 0x187ff0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x187ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x187ff4: 0x8e050168  lw          $a1, 0x168($s0)
    ctx->pc = 0x187ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x187ff8: 0xc062080  jal         func_188200
    ctx->pc = 0x187FF8u;
    SET_GPR_U32(ctx, 31, 0x188000u);
    ctx->pc = 0x188200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188200u, 0x187FF8u, 0x188000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188000u;
label_188000:
    // 0x188000: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x188000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x188004: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x188004u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x188008: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x188008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18800c: 0xa423f138  sh          $v1, -0xEC8($at)
    ctx->pc = 0x18800cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F138u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47F138u, _value); } while (0);
    // 0x188010: 0xae110168  sw          $s1, 0x168($s0)
    ctx->pc = 0x188010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 17));
label_188014:
    // 0x188014: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x188014u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188018: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x188018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18801c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18801cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188028: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x188028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18802c: 0x3e00008  jr          $ra
    ctx->pc = 0x18802Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18802Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188034u;
}
