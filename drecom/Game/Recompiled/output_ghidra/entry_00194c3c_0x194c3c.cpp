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

// Function: entry_00194c3c
// Address: 0x194c3c - 0x194d28
void entry_00194c3c_0x194c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194c3c_0x194c3c");
#endif

    switch (ctx->pc) {
        case 0x194c60u: goto label_194c60;
        case 0x194d0cu: goto label_194d0c;
        default: break;
    }

    ctx->pc = 0x194c3cu;

    // 0x194c3c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x194c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c40: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x194c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c44: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x194c44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194c48: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x194c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c4c: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x194c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194c50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x194c50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x194c54: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x194c54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x194c58: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x194C58u;
    SET_GPR_U32(ctx, 31, 0x194C60u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x194C58u, 0x194C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194C60u;
label_194c60:
    // 0x194c60: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x194c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x194c64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194c68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x194c6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194c70: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194c74: 0xc7a2010c  lwc1        $f2, 0x10C($sp)
    ctx->pc = 0x194c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194c78: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x194c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c7c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x194c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194c80: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x194c80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194c84: 0xc6e101b4  lwc1        $f1, 0x1B4($s7)
    ctx->pc = 0x194c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c88: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x194c88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x194c8c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194c90: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194c94: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x194c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194c98: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x194c98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x194c9c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x194c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x194ca0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x194ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x194ca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x194ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194ca8: 0x0  nop
    ctx->pc = 0x194ca8u;
    // NOP
    // 0x194cac: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x194cacu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x194cb0: 0x92c20345  lbu         $v0, 0x345($s6)
    ctx->pc = 0x194cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 837)));
    // 0x194cb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194cb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x194cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x194cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x194cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194cc0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x194cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x194cc4: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x194cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x194cc8: 0xc4410ac8  lwc1        $f1, 0xAC8($v0)
    ctx->pc = 0x194cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x194ccc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x194cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x194cd0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x194cd0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194cd4: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x194cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194cd8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x194cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194cdc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x194cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x194ce0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x194ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x194ce4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x194ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194ce8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x194ce8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x194cec: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x194cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x194cf0: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x194cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x194cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194cf8: 0x0  nop
    ctx->pc = 0x194cf8u;
    // NOP
    // 0x194cfc: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x194cfcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x194d00: 0xc7ac00fc  lwc1        $f12, 0xFC($sp)
    ctx->pc = 0x194d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x194d04: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x194D04u;
    SET_GPR_U32(ctx, 31, 0x194D0Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x194D04u, 0x194D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194D0Cu;
label_194d0c:
    // 0x194d0c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x194d0cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x194d10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x194d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x194d14: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x194d14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194d18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194D18u;
    {
        const bool branch_taken_0x194d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194d18) {
            ctx->pc = 0x194D28u;
            return;
        }
    }
    ctx->pc = 0x194D20u;
    // 0x194d20: 0x341effff  ori         $fp, $zero, 0xFFFF
    ctx->pc = 0x194d20u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x194d24: 0x0  nop
    ctx->pc = 0x194d24u;
    // NOP
    ctx->pc = 0x194d28u;
}
