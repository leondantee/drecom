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

// Function: entry_001bd40c
// Address: 0x1bd40c - 0x1bd45c
void entry_001bd40c_0x1bd40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd40c_0x1bd40c");
#endif

    ctx->pc = 0x1bd40cu;

    // 0x1bd40c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bd40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd410: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd414: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1bd414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1bd418: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd41c: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1bd41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd420: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd424: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1bd424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1bd428: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd42c: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1bd42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd430: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd434: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1bd434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1bd438: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd43c: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1bd43cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bd440: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd444: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1bd444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1bd448: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD448u;
    {
        const bool branch_taken_0x1bd448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd448) {
            ctx->pc = 0x1BD45Cu;
            return;
        }
    }
    ctx->pc = 0x1BD450u;
    // 0x1bd450: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd454: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1BD454u;
    SET_GPR_U32(ctx, 31, 0x1BD45Cu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1BD454u, 0x1BD45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD45Cu;
}
