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

// Function: entry_00311908
// Address: 0x311908 - 0x311958
void entry_00311908_0x311908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00311908_0x311908");
#endif

    ctx->pc = 0x311908u;

    // 0x311908: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x311908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31190c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x31190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x311910: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x311910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x311914: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x311914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x311918: 0x244297b0  addiu       $v0, $v0, -0x6850
    ctx->pc = 0x311918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940592));
    // 0x31191c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311920: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x311920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x311924: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x311924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311928: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x311928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31192c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x31192cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x311930: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x311930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x311934: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x311934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311938: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x311938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x31193c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x31193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x311940: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x311940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x311944: 0xc6210128  lwc1        $f1, 0x128($s1)
    ctx->pc = 0x311944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x311948: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x311948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31194c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31194cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x311950: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x311950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x311954: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x311954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x311958u;
}
