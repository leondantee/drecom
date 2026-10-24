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

// Function: entry_001bd6dc
// Address: 0x1bd6dc - 0x1bd72c
void entry_001bd6dc_0x1bd6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd6dc_0x1bd6dc");
#endif

    ctx->pc = 0x1bd6dcu;

    // 0x1bd6dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bd6dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bd6e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6e4: 0xe4601564  swc1        $f0, 0x1564($v1)
    ctx->pc = 0x1bd6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5476), bits); }
    // 0x1bd6e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6ec: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1bd6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd6f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6f4: 0xe4601568  swc1        $f0, 0x1568($v1)
    ctx->pc = 0x1bd6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5480), bits); }
    // 0x1bd6f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd6fc: 0xc4601568  lwc1        $f0, 0x1568($v1)
    ctx->pc = 0x1bd6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bd700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd704: 0xe4601570  swc1        $f0, 0x1570($v1)
    ctx->pc = 0x1bd704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5488), bits); }
    // 0x1bd708: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd70c: 0xa4601574  sh          $zero, 0x1574($v1)
    ctx->pc = 0x1bd70cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5492), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bd710: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd714: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1bd714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1bd718: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD718u;
    {
        const bool branch_taken_0x1bd718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd718) {
            ctx->pc = 0x1BD72Cu;
            return;
        }
    }
    ctx->pc = 0x1BD720u;
    // 0x1bd720: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1bd720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd724: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1BD724u;
    SET_GPR_U32(ctx, 31, 0x1BD72Cu);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1BD724u, 0x1BD72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD72Cu;
}
