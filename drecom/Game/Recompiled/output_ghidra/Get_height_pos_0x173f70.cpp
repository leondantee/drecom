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

// Function: Get_height_pos
// Address: 0x173f70 - 0x174024
void Get_height_pos_0x173f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_height_pos_0x173f70");
#endif

    switch (ctx->pc) {
        case 0x173f90u: goto label_173f90;
        case 0x173fa0u: goto label_173fa0;
        case 0x173fe8u: goto label_173fe8;
        default: break;
    }

    ctx->pc = 0x173f70u;

    // 0x173f70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x173f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x173f74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x173f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x173f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173f7c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x173f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x173f80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x173f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173f84: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x173f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f88: 0xc040c9e  jal         func_103278
    ctx->pc = 0x173F88u;
    SET_GPR_U32(ctx, 31, 0x173F90u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x173F90u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173F90u) { return; }
    ctx->pc = 0x173F90u;
label_173f90:
    // 0x173f90: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x173f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173f94: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x173f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x173f98: 0xc040c9e  jal         func_103278
    ctx->pc = 0x173F98u;
    SET_GPR_U32(ctx, 31, 0x173FA0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x173FA0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x173FA0u) { return; }
    ctx->pc = 0x173FA0u;
label_173fa0:
    // 0x173fa0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x173fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173fa4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x173fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x173fa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173fac: 0x0  nop
    ctx->pc = 0x173facu;
    // NOP
    // 0x173fb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x173fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x173fb4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x173fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x173fb8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x173fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x173fbc: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x173fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x173fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173fc4: 0x0  nop
    ctx->pc = 0x173fc4u;
    // NOP
    // 0x173fc8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x173fc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x173fcc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x173fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x173fd0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x173fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173fd4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x173fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173fd8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x173fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x173fdc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x173fdcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x173fe0: 0xc059e1c  jal         func_167870
    ctx->pc = 0x173FE0u;
    SET_GPR_U32(ctx, 31, 0x173FE8u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x173FE0u, 0x173FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173FE8u;
label_173fe8:
    // 0x173fe8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x173fe8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x173fec: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x173FECu;
    {
        const bool branch_taken_0x173fec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x173fec) {
            ctx->pc = 0x174008u;
            goto label_174008;
        }
    }
    ctx->pc = 0x173FF4u;
    // 0x173ff4: 0x3c02c743  lui         $v0, 0xC743
    ctx->pc = 0x173ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51011 << 16));
    // 0x173ff8: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x173ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x173ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174000: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174000u;
    {
        const bool branch_taken_0x174000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174000) {
            ctx->pc = 0x174010u;
            goto label_174010;
        }
    }
    ctx->pc = 0x174008u;
label_174008:
    // 0x174008: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x174008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17400c: 0x0  nop
    ctx->pc = 0x17400cu;
    // NOP
label_174010:
    // 0x174010: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x174010u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174018: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x174018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17401c: 0x3e00008  jr          $ra
    ctx->pc = 0x17401Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17401Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174024u;
}
