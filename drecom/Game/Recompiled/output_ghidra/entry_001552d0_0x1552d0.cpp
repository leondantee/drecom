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

// Function: entry_001552d0
// Address: 0x1552d0 - 0x155318
void entry_001552d0_0x1552d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001552d0_0x1552d0");
#endif

    ctx->pc = 0x1552d0u;

    // 0x1552d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1552d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552d4: 0xc461124c  lwc1        $f1, 0x124C($v1)
    ctx->pc = 0x1552d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1552d8: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x1552d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x1552dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1552dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1552e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1552e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1552e4: 0x0  nop
    ctx->pc = 0x1552e4u;
    // NOP
    // 0x1552e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1552e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1552ec: 0xe460124c  swc1        $f0, 0x124C($v1)
    ctx->pc = 0x1552ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4684), bits); }
    // 0x1552f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1552f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552f4: 0x84421250  lh          $v0, 0x1250($v0)
    ctx->pc = 0x1552f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4688)));
    // 0x1552f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1552F8u;
    {
        const bool branch_taken_0x1552f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1552f8) {
            ctx->pc = 0x155318u;
            return;
        }
    }
    ctx->pc = 0x155300u;
    // 0x155300: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155304: 0x84621250  lh          $v0, 0x1250($v1)
    ctx->pc = 0x155304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4688)));
    // 0x155308: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x155308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15530c: 0xa4621250  sh          $v0, 0x1250($v1)
    ctx->pc = 0x15530cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4688), (uint16_t)GPR_U32(ctx, 2));
    // 0x155310: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x155310u;
    {
        const bool branch_taken_0x155310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x155310) {
            ctx->pc = 0x155428u;
            return;
        }
    }
    ctx->pc = 0x155318u;
}
