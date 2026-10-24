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

// Function: entry_002971bc
// Address: 0x2971bc - 0x297204
void entry_002971bc_0x2971bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002971bc_0x2971bc");
#endif

    ctx->pc = 0x2971bcu;

    // 0x2971bc: 0x860269ac  lh          $v0, 0x69AC($s0)
    ctx->pc = 0x2971bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27052)));
    // 0x2971c0: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2971c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2971c4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2971c4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2971c8: 0x860269a8  lh          $v0, 0x69A8($s0)
    ctx->pc = 0x2971c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27048)));
    // 0x2971cc: 0xa60269a4  sh          $v0, 0x69A4($s0)
    ctx->pc = 0x2971ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27044), (uint16_t)GPR_U32(ctx, 2));
    // 0x2971d0: 0x860269aa  lh          $v0, 0x69AA($s0)
    ctx->pc = 0x2971d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27050)));
    // 0x2971d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2971d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2971d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2971d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2971dc: 0x860269ae  lh          $v0, 0x69AE($s0)
    ctx->pc = 0x2971dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27054)));
    // 0x2971e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2971e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2971e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2971e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2971e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2971e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2971ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2971ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2971f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2971f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2971f4: 0xa60269a6  sh          $v0, 0x69A6($s0)
    ctx->pc = 0x2971f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27046), (uint16_t)GPR_U32(ctx, 2));
    // 0x2971f8: 0x26160008  addiu       $s6, $s0, 0x8
    ctx->pc = 0x2971f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2971fc: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x2971FCu;
    {
        const bool branch_taken_0x2971fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2971fc) {
            ctx->pc = 0x2977F0u;
            return;
        }
    }
    ctx->pc = 0x297204u;
}
