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

// Function: entry_002d1a80
// Address: 0x2d1a80 - 0x2d1b3c
void entry_002d1a80_0x2d1a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1a80_0x2d1a80");
#endif

    ctx->pc = 0x2d1a80u;

    // 0x2d1a80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a84: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1a88: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2d1a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2d1a8c: 0x146000d6  bnez        $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2D1A8Cu;
    {
        const bool branch_taken_0x2d1a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a8c) {
            ctx->pc = 0x2D1DE8u;
            return;
        }
    }
    ctx->pc = 0x2D1A94u;
    // 0x2d1a94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1a98: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x2d1a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x2d1a9c: 0x146000b3  bnez        $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x2D1A9Cu;
    {
        const bool branch_taken_0x2d1a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1a9c) {
            ctx->pc = 0x2D1D6Cu;
            return;
        }
    }
    ctx->pc = 0x2D1AA4u;
    // 0x2d1aa4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1aa8: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1aac: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2d1aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2d1ab0: 0x146000cd  bnez        $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x2D1AB0u;
    {
        const bool branch_taken_0x2d1ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ab0) {
            ctx->pc = 0x2D1DE8u;
            return;
        }
    }
    ctx->pc = 0x2D1AB8u;
    // 0x2d1ab8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1abc: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1ac0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d1ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d1ac4: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D1AC4u;
    {
        const bool branch_taken_0x2d1ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ac4) {
            ctx->pc = 0x2D1B3Cu;
            return;
        }
    }
    ctx->pc = 0x2D1ACCu;
    // 0x2d1acc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ad0: 0x8c631334  lw          $v1, 0x1334($v1)
    ctx->pc = 0x2d1ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4916)));
    // 0x2d1ad4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2d1ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2d1ad8: 0x146000c3  bnez        $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2D1AD8u;
    {
        const bool branch_taken_0x2d1ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ad8) {
            ctx->pc = 0x2D1DE8u;
            return;
        }
    }
    ctx->pc = 0x2D1AE0u;
    // 0x2d1ae0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2d1ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1ae4: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d1ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d1ae8: 0x2403ff85  addiu       $v1, $zero, -0x7B
    ctx->pc = 0x2d1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967173));
    // 0x2d1aec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d1aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d1af0: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d1af0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d1af4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d1af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1af8: 0x8c831334  lw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4916)));
    // 0x2d1afc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2d1afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2d1b00: 0xac831334  sw          $v1, 0x1334($a0)
    ctx->pc = 0x2d1b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4916), GPR_U32(ctx, 3));
    // 0x2d1b04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d1b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1b08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b0c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d1b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1b10: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x2d1b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2d1b14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b18: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d1b18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d1b1c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b20: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d1b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1b24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b28: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d1b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d1b2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d1b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1b30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d1b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d1b34: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2D1B34u;
    {
        const bool branch_taken_0x2d1b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1b34) {
            ctx->pc = 0x2D1DE8u;
            return;
        }
    }
    ctx->pc = 0x2D1B3Cu;
}
