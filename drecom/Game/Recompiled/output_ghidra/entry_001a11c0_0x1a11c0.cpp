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

// Function: entry_001a11c0
// Address: 0x1a11c0 - 0x1a1230
void entry_001a11c0_0x1a11c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a11c0_0x1a11c0");
#endif

    ctx->pc = 0x1a11c0u;

    // 0x1a11c0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a11c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a11c4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1a11c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a11c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1a11c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a11cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a11ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a11d0: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a11d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a11d4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a11d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a11d8: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x1A11D8u;
    {
        const bool branch_taken_0x1a11d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11d8) {
            ctx->pc = 0x1A12E4u;
            return;
        }
    }
    ctx->pc = 0x1A11E0u;
    // 0x1a11e0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a11e4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a11e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a11e8: 0x80630016  lb          $v1, 0x16($v1)
    ctx->pc = 0x1a11e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x1a11ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A11ECu;
    {
        const bool branch_taken_0x1a11ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11ec) {
            ctx->pc = 0x1A1230u;
            return;
        }
    }
    ctx->pc = 0x1A11F4u;
    // 0x1a11f4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a11f8: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a11f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a11fc: 0x80830016  lb          $v1, 0x16($a0)
    ctx->pc = 0x1a11fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x1a1200: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1204: 0xa0830016  sb          $v1, 0x16($a0)
    ctx->pc = 0x1a1204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1208: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a120c: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a120cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1210: 0x601827  not         $v1, $v1
    ctx->pc = 0x1a1210u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1a1214: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a1214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1218: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a1218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a121c: 0x94830012  lhu         $v1, 0x12($a0)
    ctx->pc = 0x1a121cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x1a1220: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1a1220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1a1224: 0xa4830012  sh          $v1, 0x12($a0)
    ctx->pc = 0x1a1224u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a1228: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1A1228u;
    {
        const bool branch_taken_0x1a1228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1228) {
            ctx->pc = 0x1A1260u;
            return;
        }
    }
    ctx->pc = 0x1A1230u;
}
