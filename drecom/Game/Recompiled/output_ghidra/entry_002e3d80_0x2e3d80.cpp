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

// Function: entry_002e3d80
// Address: 0x2e3d80 - 0x2e3e10
void entry_002e3d80_0x2e3d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3d80_0x2e3d80");
#endif

    ctx->pc = 0x2e3d80u;

    // 0x2e3d80: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x2e3d80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e3d84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E3D84u;
    {
        const bool branch_taken_0x2e3d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3d84) {
            ctx->pc = 0x2E3D70u;
            return;
        }
    }
    ctx->pc = 0x2E3D8Cu;
    // 0x2e3d8c: 0xa640006e  sh          $zero, 0x6E($s2)
    ctx->pc = 0x2e3d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 110), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e3d90: 0xa6400070  sh          $zero, 0x70($s2)
    ctx->pc = 0x2e3d90u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e3d94: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2e3d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2e3d98: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e3d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e3d9c: 0x24752710  addiu       $s5, $v1, 0x2710
    ctx->pc = 0x2e3d9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
    // 0x2e3da0: 0x96a30140  lhu         $v1, 0x140($s5)
    ctx->pc = 0x2e3da0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 320)));
    // 0x2e3da4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x2e3da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x2e3da8: 0xa6a30140  sh          $v1, 0x140($s5)
    ctx->pc = 0x2e3da8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e3dac: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2e3dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2e3db0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e3db0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3db4: 0x0  nop
    ctx->pc = 0x2e3db4u;
    // NOP
    // 0x2e3db8: 0xe6a00128  swc1        $f0, 0x128($s5)
    ctx->pc = 0x2e3db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 296), bits); }
    // 0x2e3dbc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2e3dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2e3dc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e3dc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3dc4: 0x0  nop
    ctx->pc = 0x2e3dc4u;
    // NOP
    // 0x2e3dc8: 0xe6a0012c  swc1        $f0, 0x12C($s5)
    ctx->pc = 0x2e3dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 300), bits); }
    // 0x2e3dcc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x2e3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x2e3dd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e3dd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3dd4: 0x0  nop
    ctx->pc = 0x2e3dd4u;
    // NOP
    // 0x2e3dd8: 0xe6a00130  swc1        $f0, 0x130($s5)
    ctx->pc = 0x2e3dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 304), bits); }
    // 0x2e3ddc: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2e3ddcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e3de0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e3de0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3de4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e3de4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3de8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e3de8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e3dec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e3decu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3df0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e3df0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3df4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e3df4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3df8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e3df8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3dfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e3dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3e00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3e04: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2e3e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e3e08: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3E10u;
}
