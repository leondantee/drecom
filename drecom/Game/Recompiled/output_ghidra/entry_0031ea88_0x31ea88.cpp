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

// Function: entry_0031ea88
// Address: 0x31ea88 - 0x31eac4
void entry_0031ea88_0x31ea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ea88_0x31ea88");
#endif

    ctx->pc = 0x31ea88u;

    // 0x31ea88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x31ea88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x31ea8c: 0x8422ec66  lh          $v0, -0x139A($at)
    ctx->pc = 0x31ea8cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x3EEC66u));
    // 0x31ea90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31ea90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31ea94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31ea94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31ea98: 0x284101f4  slti        $at, $v0, 0x1F4
    ctx->pc = 0x31ea98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x31ea9c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x31EA9Cu;
    {
        const bool branch_taken_0x31ea9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ea9c) {
            ctx->pc = 0x31EAC4u;
            return;
        }
    }
    ctx->pc = 0x31EAA4u;
    // 0x31eaa4: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x31eaa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x31eaa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31eaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31eaac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31eaacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31eab0: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x31eab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x31eab4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31EAB4u;
    {
        const bool branch_taken_0x31eab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31eab4) {
            ctx->pc = 0x31EAC4u;
            return;
        }
    }
    ctx->pc = 0x31EABCu;
    // 0x31eabc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31eabcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31eac0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31eac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x31eac4u;
}
