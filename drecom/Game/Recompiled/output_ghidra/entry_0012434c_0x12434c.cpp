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

// Function: entry_0012434c
// Address: 0x12434c - 0x1243cc
void entry_0012434c_0x12434c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012434c_0x12434c");
#endif

    ctx->pc = 0x12434cu;

    // 0x12434c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12434cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124350: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x124350u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x124354: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x124354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x124358: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x124358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x12435c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x12435Cu;
    {
        const bool branch_taken_0x12435c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12435c) {
            ctx->pc = 0x1243CCu;
            return;
        }
    }
    ctx->pc = 0x124364u;
    // 0x124364: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124368: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x124368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x12436c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12436cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x124370: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x124370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x124374: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x124374u;
    {
        const bool branch_taken_0x124374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124374) {
            ctx->pc = 0x1244B8u;
            return;
        }
    }
    ctx->pc = 0x12437Cu;
    // 0x12437c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124380: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x124380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x124384: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x124384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x124388: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x124388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x12438c: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x12438Cu;
    {
        const bool branch_taken_0x12438c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12438c) {
            ctx->pc = 0x1244B8u;
            return;
        }
    }
    ctx->pc = 0x124394u;
    // 0x124394: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x124394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x124398: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x124398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x12439c: 0xa0400c60  sb          $zero, 0xC60($v0)
    ctx->pc = 0x12439cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3168), (uint8_t)GPR_U32(ctx, 0));
    // 0x1243a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1243a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1243a4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1243a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1243a8: 0xa0400cf0  sb          $zero, 0xCF0($v0)
    ctx->pc = 0x1243a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3312), (uint8_t)GPR_U32(ctx, 0));
    // 0x1243ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1243acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1243b0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1243b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1243b4: 0xa0400d80  sb          $zero, 0xD80($v0)
    ctx->pc = 0x1243b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3456), (uint8_t)GPR_U32(ctx, 0));
    // 0x1243b8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1243b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1243bc: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1243bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1243c0: 0xa0400e10  sb          $zero, 0xE10($v0)
    ctx->pc = 0x1243c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3600), (uint8_t)GPR_U32(ctx, 0));
    // 0x1243c4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1243C4u;
    {
        const bool branch_taken_0x1243c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1243c4) {
            ctx->pc = 0x1244B8u;
            return;
        }
    }
    ctx->pc = 0x1243CCu;
}
