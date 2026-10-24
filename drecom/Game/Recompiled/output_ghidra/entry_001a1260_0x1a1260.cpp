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

// Function: entry_001a1260
// Address: 0x1a1260 - 0x1a12b0
void entry_001a1260_0x1a1260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1260_0x1a1260");
#endif

    ctx->pc = 0x1a1260u;

    // 0x1a1260: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1264: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a1264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a1268: 0x80630026  lb          $v1, 0x26($v1)
    ctx->pc = 0x1a1268u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x1a126c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A126Cu;
    {
        const bool branch_taken_0x1a126c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a126c) {
            ctx->pc = 0x1A12B0u;
            return;
        }
    }
    ctx->pc = 0x1A1274u;
    // 0x1a1274: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1a1274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1278: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1a1278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a127c: 0x80830026  lb          $v1, 0x26($a0)
    ctx->pc = 0x1a127cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x1a1280: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a1280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1284: 0xa0830026  sb          $v1, 0x26($a0)
    ctx->pc = 0x1a1284u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a1288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a128c: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x1a128cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x1a1290: 0x601827  not         $v1, $v1
    ctx->pc = 0x1a1290u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x1a1294: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1a1294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a1298: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1a1298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a129c: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x1a129cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a12a0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1a12a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1a12a4: 0xa4830014  sh          $v1, 0x14($a0)
    ctx->pc = 0x1a12a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a12a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1A12A8u;
    {
        const bool branch_taken_0x1a12a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12a8) {
            ctx->pc = 0x1A1340u;
            return;
        }
    }
    ctx->pc = 0x1A12B0u;
}
