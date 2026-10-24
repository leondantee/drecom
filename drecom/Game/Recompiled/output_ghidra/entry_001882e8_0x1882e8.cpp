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

// Function: entry_001882e8
// Address: 0x1882e8 - 0x188328
void entry_001882e8_0x1882e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001882e8_0x1882e8");
#endif

    ctx->pc = 0x1882e8u;

    // 0x1882e8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1882e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1882ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1882ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1882f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1882f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1882f4: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1882F4u;
    {
        const bool branch_taken_0x1882f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1882f4) {
            ctx->pc = 0x188328u;
            return;
        }
    }
    ctx->pc = 0x1882FCu;
    // 0x1882fc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1882fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188300: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x188300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x188304: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x188304u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x188308: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x188308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18830c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18830cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188310: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x188310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x188314: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x188314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x188318: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x188318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18831c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x18831cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x188320: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x188320u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x188324: 0x0  nop
    ctx->pc = 0x188324u;
    // NOP
    ctx->pc = 0x188328u;
}
