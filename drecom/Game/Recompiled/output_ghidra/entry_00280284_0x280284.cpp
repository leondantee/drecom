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

// Function: entry_00280284
// Address: 0x280284 - 0x280320
void entry_00280284_0x280284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00280284_0x280284");
#endif

    switch (ctx->pc) {
        case 0x2802ccu: goto label_2802cc;
        case 0x28031cu: goto label_28031c;
        default: break;
    }

    ctx->pc = 0x280284u;

    // 0x280284: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x280284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280288: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x280288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28028c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28028cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x280290: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x280290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x280294: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x280294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x280298: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x280298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x28029c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2802a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2802a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2802a4: 0x0  nop
    ctx->pc = 0x2802a4u;
    // NOP
    // 0x2802a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2802a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2802ac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2802acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2802b0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2802b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2802b4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2802b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2802b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2802b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2802bc: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2802bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x2802c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2802c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2802c4: 0xc056518  jal         func_159460
    ctx->pc = 0x2802C4u;
    SET_GPR_U32(ctx, 31, 0x2802CCu);
    ctx->pc = 0x159460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159460u, 0x2802C4u, 0x2802CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2802CCu;
label_2802cc:
    // 0x2802cc: 0x16400014  bnez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x2802CCu;
    {
        const bool branch_taken_0x2802cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2802cc) {
            ctx->pc = 0x280320u;
            return;
        }
    }
    ctx->pc = 0x2802D4u;
    // 0x2802d4: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2802d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2802d8: 0x3c024592  lui         $v0, 0x4592
    ctx->pc = 0x2802d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17810 << 16));
    // 0x2802dc: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x2802dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x2802e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2802e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2802e4: 0x0  nop
    ctx->pc = 0x2802e4u;
    // NOP
    // 0x2802e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2802e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2802ec: 0x0  nop
    ctx->pc = 0x2802ecu;
    // NOP
    // 0x2802f0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x2802F0u;
    {
        const bool branch_taken_0x2802f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2802f0) {
            ctx->pc = 0x280320u;
            return;
        }
    }
    ctx->pc = 0x2802F8u;
    // 0x2802f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2802f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2802fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2802fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280300: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x280300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280304: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x280304u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x280308: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x280308u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28030c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x28030cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x280310: 0x240a006e  addiu       $t2, $zero, 0x6E
    ctx->pc = 0x280310u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x280314: 0xc059190  jal         func_164640
    ctx->pc = 0x280314u;
    SET_GPR_U32(ctx, 31, 0x28031Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x280314u, 0x28031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28031Cu;
label_28031c:
    // 0x28031c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x28031cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x280320u;
}
