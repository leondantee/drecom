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

// Function: entry_0010dd90
// Address: 0x10dd90 - 0x10de1c
void entry_0010dd90_0x10dd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dd90_0x10dd90");
#endif

    ctx->pc = 0x10dd90u;

    // 0x10dd90: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x10dd90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x10dd94: 0x26e74340  addiu       $a3, $s7, 0x4340
    ctx->pc = 0x10dd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 17216));
    // 0x10dd98: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x10dd98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x10dd9c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10dd9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dda0: 0x1812  mflo        $v1
    ctx->pc = 0x10dda0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x10dda4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x10dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x10dda8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x10dda8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ddac: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x10ddacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x10ddb0: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x10ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x10ddb4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10ddb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10ddbc: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x10ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x10ddc0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x10ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x10ddc4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x10ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x10ddc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ddcc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x10ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x10ddd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10ddd4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x10ddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x10ddd8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x10ddd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10dddc: 0xa0a3030c  sb          $v1, 0x30C($a1)
    ctx->pc = 0x10dddcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 780), (uint8_t)GPR_U32(ctx, 3));
    // 0x10dde0: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x10dde0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x10dde4: 0xa0a2030d  sb          $v0, 0x30D($a1)
    ctx->pc = 0x10dde4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 781), (uint8_t)GPR_U32(ctx, 2));
    // 0x10dde8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x10dde8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x10ddec: 0xaca70310  sw          $a3, 0x310($a1)
    ctx->pc = 0x10ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 784), GPR_U32(ctx, 7));
    // 0x10ddf0: 0xa0a3030e  sb          $v1, 0x30E($a1)
    ctx->pc = 0x10ddf0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 782), (uint8_t)GPR_U32(ctx, 3));
    // 0x10ddf4: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x10ddf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x10ddf8: 0x10680008  beq         $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10DDF8u;
    {
        const bool branch_taken_0x10ddf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x10DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DDF8u;
        // 0x10ddfc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ddf8) {
            ctx->pc = 0x10DE1Cu;
            return;
        }
    }
    ctx->pc = 0x10DE00u;
    // 0x10de00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10DE00u;
    {
        const bool branch_taken_0x10de00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE00u;
        // 0x10de04: 0x24120800  addiu       $s2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de00) {
            ctx->pc = 0x10DE20u;
            return;
        }
    }
    ctx->pc = 0x10DE08u;
    // 0x10de08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10de08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10de0c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DE0Cu;
    {
        const bool branch_taken_0x10de0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10de0c) {
            ctx->pc = 0x10DE10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DE0Cu;
            // 0x10de10: 0x24120924  addiu       $s2, $zero, 0x924 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DE20u;
            return;
        }
    }
    ctx->pc = 0x10DE14u;
    // 0x10de14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10DE14u;
    {
        const bool branch_taken_0x10de14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE14u;
        // 0x10de18: 0x8ea245a8  lw          $v0, 0x45A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de14) {
            ctx->pc = 0x10DE24u;
            return;
        }
    }
    ctx->pc = 0x10DE1Cu;
}
