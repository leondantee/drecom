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

// Function: entry_00350fb8
// Address: 0x350fb8 - 0x350fe8
void entry_00350fb8_0x350fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00350fb8_0x350fb8");
#endif

    ctx->pc = 0x350fb8u;

    // 0x350fb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350fbc: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x350fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350fc0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x350fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x350fc4: 0x30710008  andi        $s1, $v1, 0x8
    ctx->pc = 0x350fc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x350fc8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x350FC8u;
    {
        const bool branch_taken_0x350fc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x350fc8) {
            ctx->pc = 0x350FE8u;
            return;
        }
    }
    ctx->pc = 0x350FD0u;
    // 0x350fd0: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x350fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
    // 0x350fd4: 0x3483cccd  ori         $v1, $a0, 0xCCCD
    ctx->pc = 0x350fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x350fd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x350fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350fdc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x350fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x350fe0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x350fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x350fe4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x350fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    ctx->pc = 0x350fe8u;
}
