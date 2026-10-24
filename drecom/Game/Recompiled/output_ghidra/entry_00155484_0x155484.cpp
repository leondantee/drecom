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

// Function: entry_00155484
// Address: 0x155484 - 0x1554cc
void entry_00155484_0x155484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155484_0x155484");
#endif

    ctx->pc = 0x155484u;

    // 0x155484: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155488: 0xc461124c  lwc1        $f1, 0x124C($v1)
    ctx->pc = 0x155488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15548c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x15548cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x155490: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x155490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x155494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x155494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155498: 0x0  nop
    ctx->pc = 0x155498u;
    // NOP
    // 0x15549c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15549cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1554a0: 0xe460124c  swc1        $f0, 0x124C($v1)
    ctx->pc = 0x1554a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4684), bits); }
    // 0x1554a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1554a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1554a8: 0x84421250  lh          $v0, 0x1250($v0)
    ctx->pc = 0x1554a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4688)));
    // 0x1554ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1554ACu;
    {
        const bool branch_taken_0x1554ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554ac) {
            ctx->pc = 0x1554CCu;
            return;
        }
    }
    ctx->pc = 0x1554B4u;
    // 0x1554b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1554b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1554b8: 0x84621250  lh          $v0, 0x1250($v1)
    ctx->pc = 0x1554b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x1554bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1554bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1554c0: 0xa4621250  sh          $v0, 0x1250($v1)
    ctx->pc = 0x1554c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4688), (uint16_t)GPR_U32(ctx, 2));
    // 0x1554c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1554C4u;
    {
        const bool branch_taken_0x1554c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1554c4) {
            ctx->pc = 0x155528u;
            return;
        }
    }
    ctx->pc = 0x1554CCu;
}
