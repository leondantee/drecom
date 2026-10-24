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

// Function: entry_0018435c
// Address: 0x18435c - 0x1843b4
void entry_0018435c_0x18435c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018435c_0x18435c");
#endif

    ctx->pc = 0x18435cu;

    // 0x18435c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x18435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184360: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x184360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x184364: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x184364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x184368: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x184368u;
    {
        const bool branch_taken_0x184368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184368) {
            ctx->pc = 0x184444u;
            return;
        }
    }
    ctx->pc = 0x184370u;
    // 0x184370: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184374: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x184374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x184378: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x184378u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18437c: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x18437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x184380: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x184380u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x184384: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x184388: 0x2442001c  addiu       $v0, $v0, 0x1C
    ctx->pc = 0x184388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x18438c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184390: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184390u;
    {
        const bool branch_taken_0x184390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184390) {
            ctx->pc = 0x1843B4u;
            return;
        }
    }
    ctx->pc = 0x184398u;
    // 0x184398: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x184398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x18439c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x18439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1843a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1843a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1843a4: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1843a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1843a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1843a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1843ac: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1843ACu;
    SET_GPR_U32(ctx, 31, 0x1843B4u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1843ACu, 0x1843B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1843B4u;
}
