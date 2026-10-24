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

// Function: Set_sys_light_pos_super
// Address: 0x176c80 - 0x176d24
void Set_sys_light_pos_super_0x176c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_sys_light_pos_super_0x176c80");
#endif

    switch (ctx->pc) {
        case 0x176ca8u: goto label_176ca8;
        default: break;
    }

    ctx->pc = 0x176c80u;

    // 0x176c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x176c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x176c84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x176c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x176c88: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x176c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x176c8c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x176c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x176c90: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x176c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x176c94: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x176c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x176c98: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x176c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x176c9c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x176c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x176ca0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x176CA0u;
    SET_GPR_U32(ctx, 31, 0x176CA8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x176CA8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x176CA8u) { return; }
    ctx->pc = 0x176CA8u;
label_176ca8:
    // 0x176ca8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x176ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176cac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x176cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176cb0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176cb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176cb8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176cbc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176cc0: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176cc4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176cc8: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x176cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x176ccc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x176cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176cd0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x176cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176cd4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176cd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176cdc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176ce0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176ce4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176ce8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176cec: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x176cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x176cf0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x176cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176cf4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x176cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176cf8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176cfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176d00: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x176d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176d04: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x176d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x176d08: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x176d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x176d0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x176d10: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x176d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x176d14: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x176d14u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176d18: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x176d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x176d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x176D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176D24u;
}
