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

// Function: entry_001fa38c
// Address: 0x1fa38c - 0x1fa3d4
void entry_001fa38c_0x1fa38c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa38c_0x1fa38c");
#endif

    ctx->pc = 0x1fa38cu;

    // 0x1fa38c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa390: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1fa390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa394: 0x9083007f  lbu         $v1, 0x7F($a0)
    ctx->pc = 0x1fa394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 127)));
    // 0x1fa398: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1fa398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x1fa39c: 0xa083007f  sb          $v1, 0x7F($a0)
    ctx->pc = 0x1fa39cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 127), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa3a0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa3a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa3a8: 0x9063007f  lbu         $v1, 0x7F($v1)
    ctx->pc = 0x1fa3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 127)));
    // 0x1fa3ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fa3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fa3b0: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x1fa3b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1fa3b4: 0x14600057  bnez        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1FA3B4u;
    {
        const bool branch_taken_0x1fa3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa3b4) {
            ctx->pc = 0x1FA514u;
            return;
        }
    }
    ctx->pc = 0x1FA3BCu;
    // 0x1fa3bc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1fa3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa3c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1fa3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa3c4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1fa3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1fa3c8: 0xa064007f  sb          $a0, 0x7F($v1)
    ctx->pc = 0x1fa3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 127), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fa3cc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1FA3CCu;
    {
        const bool branch_taken_0x1fa3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa3cc) {
            ctx->pc = 0x1FA514u;
            return;
        }
    }
    ctx->pc = 0x1FA3D4u;
}
