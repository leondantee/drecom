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

// Function: entry_00188258
// Address: 0x188258 - 0x188298
void entry_00188258_0x188258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188258_0x188258");
#endif

    ctx->pc = 0x188258u;

    // 0x188258: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x188258u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18825c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x18825cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x188260: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x188260u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x188264: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x188264u;
    {
        const bool branch_taken_0x188264 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x188264) {
            ctx->pc = 0x188298u;
            return;
        }
    }
    ctx->pc = 0x18826Cu;
    // 0x18826c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x18826cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x188270: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x188270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x188274: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x188274u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x188278: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x188278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18827c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188280: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x188280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x188284: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x188284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x188288: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x188288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18828c: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x18828cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x188290: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x188290u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x188294: 0x0  nop
    ctx->pc = 0x188294u;
    // NOP
    ctx->pc = 0x188298u;
}
