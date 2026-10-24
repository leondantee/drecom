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

// Function: CallCdModule
// Address: 0x1d8ba0 - 0x1d9224
void CallCdModule_0x1d8ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CallCdModule_0x1d8ba0");
#endif

    switch (ctx->pc) {
        case 0x1d8be8u: goto label_1d8be8;
        case 0x1d8c00u: goto label_1d8c00;
        case 0x1d8cf4u: goto label_1d8cf4;
        case 0x1d8d1cu: goto label_1d8d1c;
        case 0x1d8e68u: goto label_1d8e68;
        case 0x1d8eb0u: goto label_1d8eb0;
        case 0x1d8ef4u: goto label_1d8ef4;
        case 0x1d8f58u: goto label_1d8f58;
        case 0x1d8fd8u: goto label_1d8fd8;
        case 0x1d902cu: goto label_1d902c;
        case 0x1d9098u: goto label_1d9098;
        case 0x1d911cu: goto label_1d911c;
        case 0x1d9170u: goto label_1d9170;
        case 0x1d9198u: goto label_1d9198;
        case 0x1d91d0u: goto label_1d91d0;
        default: break;
    }

    ctx->pc = 0x1d8ba0u;

    // 0x1d8ba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d8ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d8ba4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x1d8ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1d8ba8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d8ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d8bac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d8bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d8bb0: 0xa7a40048  sh          $a0, 0x48($sp)
    ctx->pc = 0x1d8bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 72), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d8bb4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1d8bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1d8bb8: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x1d8bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x1d8bbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8bc0: 0x2450c580  addiu       $s0, $v0, -0x3A80
    ctx->pc = 0x1d8bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952320));
    // 0x1d8bc4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8bc8: 0xac20c508  sw          $zero, -0x3AF8($at)
    ctx->pc = 0x1d8bc8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5FC508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC508u, _value); } while (0);
    // 0x1d8bcc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8bd0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8bd4: 0xac22c400  sw          $v0, -0x3C00($at)
    ctx->pc = 0x1d8bd4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC400u, _value); } while (0);
    // 0x1d8bd8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8bdc: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8be0: 0xc085766  jal         func_215D98
    ctx->pc = 0x1D8BE0u;
    SET_GPR_U32(ctx, 31, 0x1D8BE8u);
    ctx->pc = 0x215D98u;
    {
        ctx->pc = 0x1D8BE8u;
        ps2_stubs::sceSifCheckStatRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8BE8u) { return; }
    ctx->pc = 0x1D8BE8u;
label_1d8be8:
    // 0x1d8be8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D8BE8u;
    {
        const bool branch_taken_0x1d8be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8be8) {
            ctx->pc = 0x1D8C1Cu;
            goto label_1d8c1c;
        }
    }
    ctx->pc = 0x1D8BF0u;
    // 0x1d8bf0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1d8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1d8bf4: 0x24440c20  addiu       $a0, $v0, 0xC20
    ctx->pc = 0x1d8bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3104));
    // 0x1d8bf8: 0xc046760  jal         func_119D80
    ctx->pc = 0x1D8BF8u;
    SET_GPR_U32(ctx, 31, 0x1D8C00u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x1D8C00u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8C00u) { return; }
    ctx->pc = 0x1D8C00u;
label_1d8c00:
    // 0x1d8c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8c04: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8c08: 0xac22c508  sw          $v0, -0x3AF8($at)
    ctx->pc = 0x1d8c08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC508u, _value); } while (0);
    // 0x1d8c0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8c10: 0x2442c400  addiu       $v0, $v0, -0x3C00
    ctx->pc = 0x1d8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d8c14: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x1D8C14u;
    {
        const bool branch_taken_0x1d8c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8c14) {
            ctx->pc = 0x1D920Cu;
            goto label_1d920c;
        }
    }
    ctx->pc = 0x1D8C1Cu;
label_1d8c1c:
    // 0x1d8c1c: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8c1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8c20: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d8c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8c24: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d8c28: 0x10620158  beq         $v1, $v0, . + 4 + (0x158 << 2)
    ctx->pc = 0x1D8C28u;
    {
        const bool branch_taken_0x1d8c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c28) {
            ctx->pc = 0x1D918Cu;
            goto label_1d918c;
        }
    }
    ctx->pc = 0x1D8C30u;
    // 0x1d8c30: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d8c34: 0x10620140  beq         $v1, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x1D8C34u;
    {
        const bool branch_taken_0x1d8c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c34) {
            ctx->pc = 0x1D9138u;
            goto label_1d9138;
        }
    }
    ctx->pc = 0x1D8C3Cu;
    // 0x1d8c3c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d8c40: 0x1062011c  beq         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x1D8C40u;
    {
        const bool branch_taken_0x1d8c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c40) {
            ctx->pc = 0x1D90B4u;
            goto label_1d90b4;
        }
    }
    ctx->pc = 0x1D8C48u;
    // 0x1d8c48: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1d8c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d8c4c: 0x106200fe  beq         $v1, $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x1D8C4Cu;
    {
        const bool branch_taken_0x1d8c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c4c) {
            ctx->pc = 0x1D9048u;
            goto label_1d9048;
        }
    }
    ctx->pc = 0x1D8C54u;
    // 0x1d8c54: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x1d8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x1d8c58: 0x106200e6  beq         $v1, $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1D8C58u;
    {
        const bool branch_taken_0x1d8c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c58) {
            ctx->pc = 0x1D8FF4u;
            goto label_1d8ff4;
        }
    }
    ctx->pc = 0x1D8C60u;
    // 0x1d8c60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d8c64: 0x106200c3  beq         $v1, $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1D8C64u;
    {
        const bool branch_taken_0x1d8c64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c64) {
            ctx->pc = 0x1D8F74u;
            goto label_1d8f74;
        }
    }
    ctx->pc = 0x1D8C6Cu;
    // 0x1d8c6c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d8c70: 0x106200ab  beq         $v1, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x1D8C70u;
    {
        const bool branch_taken_0x1d8c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c70) {
            ctx->pc = 0x1D8F20u;
            goto label_1d8f20;
        }
    }
    ctx->pc = 0x1D8C78u;
    // 0x1d8c78: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d8c7c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D8C7Cu;
    {
        const bool branch_taken_0x1d8c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c7c) {
            ctx->pc = 0x1D8D10u;
            goto label_1d8d10;
        }
    }
    ctx->pc = 0x1D8C84u;
    // 0x1d8c84: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d8c88: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D8C88u;
    {
        const bool branch_taken_0x1d8c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c88) {
            ctx->pc = 0x1D8D10u;
            goto label_1d8d10;
        }
    }
    ctx->pc = 0x1D8C90u;
    // 0x1d8c90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d8c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d8c94: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D8C94u;
    {
        const bool branch_taken_0x1d8c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8c94) {
            ctx->pc = 0x1D8D10u;
            goto label_1d8d10;
        }
    }
    ctx->pc = 0x1D8C9Cu;
    // 0x1d8c9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8ca0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D8CA0u;
    {
        const bool branch_taken_0x1d8ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8ca0) {
            ctx->pc = 0x1D8D10u;
            goto label_1d8d10;
        }
    }
    ctx->pc = 0x1D8CA8u;
    // 0x1d8ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8cac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8CACu;
    {
        const bool branch_taken_0x1d8cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8cac) {
            ctx->pc = 0x1D8CBCu;
            goto label_1d8cbc;
        }
    }
    ctx->pc = 0x1D8CB4u;
    // 0x1d8cb4: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x1D8CB4u;
    {
        const bool branch_taken_0x1d8cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8cb4) {
            ctx->pc = 0x1D91E4u;
            goto label_1d91e4;
        }
    }
    ctx->pc = 0x1D8CBCu;
label_1d8cbc:
    // 0x1d8cbc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8cc0: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8cc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8cc4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8cc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8cc8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8ccc: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d8cccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d8cd0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8cd4: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8cd8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d8cd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8cdc: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1d8cdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8ce0: 0x2408006c  addiu       $t0, $zero, 0x6C
    ctx->pc = 0x1d8ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d8ce4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d8ce4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8ce8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d8ce8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8cec: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D8CECu;
    SET_GPR_U32(ctx, 31, 0x1D8CF4u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D8CF4u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8CF4u) { return; }
    ctx->pc = 0x1D8CF4u;
label_1d8cf4:
    // 0x1d8cf4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8cf8: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d8cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8d00: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8d04: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8d04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d8d08: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x1D8D08u;
    {
        const bool branch_taken_0x1d8d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8d08) {
            ctx->pc = 0x1D91E4u;
            goto label_1d91e4;
        }
    }
    ctx->pc = 0x1D8D10u;
label_1d8d10:
    // 0x1d8d10: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d8d10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8d14: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x1D8D14u;
    SET_GPR_U32(ctx, 31, 0x1D8D1Cu);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x1D8D1Cu;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8D1Cu) { return; }
    ctx->pc = 0x1D8D1Cu;
label_1d8d1c:
    // 0x1d8d1c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1d8d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d8d20: 0x163c  dsll32      $v0, $zero, 24
    ctx->pc = 0x1d8d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 24));
    // 0x1d8d24: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1d8d24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1d8d28: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1d8d28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8d2c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8d30: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d8d34: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8d38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8d3c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1d8d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d8d40: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1d8d40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1d8d44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8d48: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1d8d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d8d4c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d8d50: 0x24429570  addiu       $v0, $v0, -0x6A90
    ctx->pc = 0x1d8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
    // 0x1d8d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8d58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8d5c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1d8d60: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1d8d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1d8d64: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8d68: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1d8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d8d6c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d8d70: 0x24429570  addiu       $v0, $v0, -0x6A90
    ctx->pc = 0x1d8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940016));
    // 0x1d8d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8d78: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1d8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d8d7c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d8d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d8d80: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8d84: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d8d88: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1d8d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1d8d8c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8d90: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d8d94: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d8d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d8d98: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8d98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8d9c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d8d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8da0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8da4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8DA4u;
    {
        const bool branch_taken_0x1d8da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8da4) {
            ctx->pc = 0x1D8DC8u;
            goto label_1d8dc8;
        }
    }
    ctx->pc = 0x1D8DACu;
    // 0x1d8dac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8db0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1d8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1d8db4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1d8db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1d8db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d8db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d8dbc: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x1d8dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8dc0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D8DC0u;
    {
        const bool branch_taken_0x1d8dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8dc0) {
            ctx->pc = 0x1D8E30u;
            goto label_1d8e30;
        }
    }
    ctx->pc = 0x1D8DC8u;
label_1d8dc8:
    // 0x1d8dc8: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8dcc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1d8dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8dd0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d8dd4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D8DD4u;
    {
        const bool branch_taken_0x1d8dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8dd4) {
            ctx->pc = 0x1D8E30u;
            goto label_1d8e30;
        }
    }
    ctx->pc = 0x1D8DDCu;
    // 0x1d8ddc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8de0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d8de4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1d8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1d8de8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8dec: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x1d8decu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d8df0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8df4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d8df8: 0x244307ff  addiu       $v1, $v0, 0x7FF
    ctx->pc = 0x1d8df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1d8dfc: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x1d8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d8e00: 0x31ac2  srl         $v1, $v1, 11
    ctx->pc = 0x1d8e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 11));
    // 0x1d8e04: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x1d8e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d8e08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8e0c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d8e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d8e10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d8e14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8e18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1d8e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1d8e1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8e20: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d8e24: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d8e28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d8e2c: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x1d8e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
label_1d8e30:
    // 0x1d8e30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8e34: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x1d8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d8e38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d8e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d8e3c: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x1d8e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d8e40: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1d8e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1d8e44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8e48: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d8e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8e4c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1d8e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1d8e50: 0x244292a0  addiu       $v0, $v0, -0x6D60
    ctx->pc = 0x1d8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939296));
    // 0x1d8e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8e58: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x1d8e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1d8e5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d8e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d8e60: 0xc046a48  jal         func_11A920
    ctx->pc = 0x1D8E60u;
    SET_GPR_U32(ctx, 31, 0x1D8E68u);
    ctx->pc = 0x11A920u;
    {
        ctx->pc = 0x1D8E68u;
        ps2_stubs::sprintf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8E68u) { return; }
    ctx->pc = 0x1D8E68u;
label_1d8e68:
    // 0x1d8e68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1d8e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d8e6c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1d8e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1d8e70: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8E70u;
    {
        const bool branch_taken_0x1d8e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e70) {
            ctx->pc = 0x1D8EBCu;
            goto label_1d8ebc;
        }
    }
    ctx->pc = 0x1D8E78u;
    // 0x1d8e78: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8e7c: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8e7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8e80: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8e84: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8e88: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d8e88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d8e8c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8e90: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8e94: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d8e94u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8e98: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1d8e98u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8e9c: 0x2408006c  addiu       $t0, $zero, 0x6C
    ctx->pc = 0x1d8e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d8ea0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d8ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8ea4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d8ea4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8ea8: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D8EA8u;
    SET_GPR_U32(ctx, 31, 0x1D8EB0u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D8EB0u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8EB0u) { return; }
    ctx->pc = 0x1D8EB0u;
label_1d8eb0:
    // 0x1d8eb0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d8eb0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d8eb4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D8EB4u;
    {
        const bool branch_taken_0x1d8eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8eb4) {
            ctx->pc = 0x1D8F04u;
            goto label_1d8f04;
        }
    }
    ctx->pc = 0x1D8EBCu;
label_1d8ebc:
    // 0x1d8ebc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8ec0: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8ec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8ec4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8ec8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8ecc: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d8eccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d8ed0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8ed4: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8ed8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d8ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8edc: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1d8edcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d8ee0: 0x2408006c  addiu       $t0, $zero, 0x6C
    ctx->pc = 0x1d8ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d8ee4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d8ee4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8ee8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d8ee8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8eec: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D8EECu;
    SET_GPR_U32(ctx, 31, 0x1D8EF4u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D8EF4u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8EF4u) { return; }
    ctx->pc = 0x1D8EF4u;
label_1d8ef4:
    // 0x1d8ef4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1d8ef4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d8ef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8efc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f00: 0xac22c400  sw          $v0, -0x3C00($at)
    ctx->pc = 0x1d8f00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC400u, _value); } while (0);
label_1d8f04:
    // 0x1d8f04: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f08: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d8f0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8f10: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f14: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8f14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d8f18: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x1D8F18u;
    {
        const bool branch_taken_0x1d8f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f18) {
            ctx->pc = 0x1D91E4u;
            goto label_1d91e4;
        }
    }
    ctx->pc = 0x1D8F20u;
label_1d8f20:
    // 0x1d8f20: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8f24: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8f24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8f28: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8f2c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f30: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d8f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d8f34: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f38: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8f3c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d8f3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8f40: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d8f40u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8f44: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1d8f44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8f48: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d8f48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8f4c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d8f4cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8f50: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D8F50u;
    SET_GPR_U32(ctx, 31, 0x1D8F58u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D8F58u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8F58u) { return; }
    ctx->pc = 0x1D8F58u;
label_1d8f58:
    // 0x1d8f58: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f5c: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d8f60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8f64: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f68: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8f68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d8f6c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1D8F6Cu;
    {
        const bool branch_taken_0x1d8f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8f6c) {
            ctx->pc = 0x1D91E4u;
            goto label_1d91e4;
        }
    }
    ctx->pc = 0x1D8F74u;
label_1d8f74:
    // 0x1d8f74: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8f78: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d8f7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8f80: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f84: 0xa422c500  sh          $v0, -0x3B00($at)
    ctx->pc = 0x1d8f84u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC500u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5FC500u, _value); } while (0);
    // 0x1d8f88: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8f8c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d8f90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1d8f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8f94: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8f98: 0xa422c502  sh          $v0, -0x3AFE($at)
    ctx->pc = 0x1d8f98u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC502u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5FC502u, _value); } while (0);
    // 0x1d8f9c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8fa0: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8fa4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d8fa8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8fac: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d8facu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d8fb0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8fb4: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d8fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d8fb8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d8fb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8fbc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d8fc0: 0x2447c500  addiu       $a3, $v0, -0x3B00
    ctx->pc = 0x1d8fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952192));
    // 0x1d8fc4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1d8fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8fc8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1d8fc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d8fcc: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d8fccu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d8fd0: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D8FD0u;
    SET_GPR_U32(ctx, 31, 0x1D8FD8u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D8FD8u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D8FD8u) { return; }
    ctx->pc = 0x1D8FD8u;
label_1d8fd8:
    // 0x1d8fd8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8fdc: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d8fe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d8fe4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d8fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d8fe8: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d8fe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d8fec: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x1D8FECu;
    {
        const bool branch_taken_0x1d8fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8fec) {
            ctx->pc = 0x1D91E4u;
            goto label_1d91e4;
        }
    }
    ctx->pc = 0x1D8FF4u;
label_1d8ff4:
    // 0x1d8ff4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d8ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d8ff8: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d8ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d8ffc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d8ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d9000: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9004: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d9004u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d9008: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d900c: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d9010: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d9010u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9014: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d9014u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9018: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1d9018u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d901c: 0x240a0098  addiu       $t2, $zero, 0x98
    ctx->pc = 0x1d901cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1d9020: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d9020u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9024: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D9024u;
    SET_GPR_U32(ctx, 31, 0x1D902Cu);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D902Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D902Cu) { return; }
    ctx->pc = 0x1D902Cu;
label_1d902c:
    // 0x1d902c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d902cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9030: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d9030u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d9034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9038: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d903c: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d903cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d9040: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1D9040u;
    {
        const bool branch_taken_0x1d9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9040) {
            ctx->pc = 0x1D91E4u;
            goto label_1d91e4;
        }
    }
    ctx->pc = 0x1D9048u;
label_1d9048:
    // 0x1d9048: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d9048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d904c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d904cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d9050: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1d9050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1d9054: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d9054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d9058: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d9058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d905c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1d905cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1d9060: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d9060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d9064: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d9064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9068: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d9068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d906c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9070: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d9070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d9074: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9078: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d9078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d907c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d907cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9080: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1d9080u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d9084: 0x2408006c  addiu       $t0, $zero, 0x6C
    ctx->pc = 0x1d9084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d9088: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d9088u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d908c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d908cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9090: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D9090u;
    SET_GPR_U32(ctx, 31, 0x1D9098u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D9098u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D9098u) { return; }
    ctx->pc = 0x1D9098u;
label_1d9098:
    // 0x1d9098: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d909c: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d909cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d90a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d90a4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d90a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d90a8: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d90a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d90ac: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1D90ACu;
    {
        const bool branch_taken_0x1d90ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d90ac) {
            ctx->pc = 0x1D91E4u;
            goto label_1d91e4;
        }
    }
    ctx->pc = 0x1D90B4u;
label_1d90b4:
    // 0x1d90b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d90b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d90b8: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1d90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1d90bc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1d90bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1d90c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d90c4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1d90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d90c8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1d90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1d90cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d90d0: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1d90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1d90d4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1d90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1d90d8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1d90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d90dc: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1d90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1d90e0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1d90e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1d90e4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d90e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d90e8: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d90e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d90ec: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d90ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d90f0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d90f4: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d90f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d90f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d90f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d90fc: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d90fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d9100: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d9100u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9104: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1d9104u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d9108: 0x2408006c  addiu       $t0, $zero, 0x6C
    ctx->pc = 0x1d9108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d910c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d910cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d9110: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d9110u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9114: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D9114u;
    SET_GPR_U32(ctx, 31, 0x1D911Cu);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D911Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D911Cu) { return; }
    ctx->pc = 0x1D911Cu;
label_1d911c:
    // 0x1d911c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d911cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9120: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d9120u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d9124: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9128: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d912c: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d912cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d9130: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1D9130u;
    {
        const bool branch_taken_0x1d9130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9130) {
            ctx->pc = 0x1D91E4u;
            goto label_1d91e4;
        }
    }
    ctx->pc = 0x1D9138u;
label_1d9138:
    // 0x1d9138: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d9138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d913c: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d913cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d9140: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d9140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d9144: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9148: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d9148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d914c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d914cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9150: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d9150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d9154: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d9154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9158: 0x72003e28  paddub      $a3, $s0, $zero
    ctx->pc = 0x1d9158u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1d915c: 0x2408006c  addiu       $t0, $zero, 0x6C
    ctx->pc = 0x1d915cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d9160: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d9160u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d9164: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d9164u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9168: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D9168u;
    SET_GPR_U32(ctx, 31, 0x1D9170u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D9170u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D9170u) { return; }
    ctx->pc = 0x1D9170u;
label_1d9170:
    // 0x1d9170: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9174: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d9174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d9178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d917c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d917cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9180: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d9180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
    // 0x1d9184: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D9184u;
    {
        const bool branch_taken_0x1d9184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9184) {
            ctx->pc = 0x1D91E4u;
            goto label_1d91e4;
        }
    }
    ctx->pc = 0x1D918Cu;
label_1d918c:
    // 0x1d918c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1d918cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9190: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x1D9190u;
    SET_GPR_U32(ctx, 31, 0x1D9198u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x1D9198u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D9198u) { return; }
    ctx->pc = 0x1D9198u;
label_1d9198:
    // 0x1d9198: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1d9198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1d919c: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x1d919cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d91a0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1d91a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d91a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d91a8: 0x2449c400  addiu       $t1, $v0, -0x3C00
    ctx->pc = 0x1d91a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1d91ac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d91acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d91b0: 0x2444c3c0  addiu       $a0, $v0, -0x3C40
    ctx->pc = 0x1d91b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951872));
    // 0x1d91b4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d91b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d91b8: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1d91b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d91bc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1d91bcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d91c0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d91c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d91c4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x1d91c4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d91c8: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x1D91C8u;
    SET_GPR_U32(ctx, 31, 0x1D91D0u);
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x1D91D0u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D91D0u) { return; }
    ctx->pc = 0x1D91D0u;
label_1d91d0:
    // 0x1d91d0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d91d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d91d4: 0x8c22c510  lw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC510u));
    // 0x1d91d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d91dc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d91dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d91e0: 0xac22c510  sw          $v0, -0x3AF0($at)
    ctx->pc = 0x1d91e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC510u, _value); } while (0);
label_1d91e4:
    // 0x1d91e4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d91e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d91e8: 0x8c23c400  lw          $v1, -0x3C00($at)
    ctx->pc = 0x1d91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FC400u));
    // 0x1d91ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d91f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D91F0u;
    {
        const bool branch_taken_0x1d91f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d91f0) {
            ctx->pc = 0x1D9204u;
            goto label_1d9204;
        }
    }
    ctx->pc = 0x1D91F8u;
    // 0x1d91f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d91fc: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d91fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9200: 0xac22c508  sw          $v0, -0x3AF8($at)
    ctx->pc = 0x1d9200u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC508u, _value); } while (0);
label_1d9204:
    // 0x1d9204: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9208: 0x2442c400  addiu       $v0, $v0, -0x3C00
    ctx->pc = 0x1d9208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
label_1d920c:
    // 0x1d920c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1d920cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9210: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d9210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9214: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d9214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9218: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1d9218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d921c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D921Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D921Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9224u;
}
