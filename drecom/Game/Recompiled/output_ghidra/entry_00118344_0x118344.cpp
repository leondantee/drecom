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

// Function: entry_00118344
// Address: 0x118344 - 0x11839c
void entry_00118344_0x118344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118344_0x118344");
#endif

    ctx->pc = 0x118344u;

    // 0x118344: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x118344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x118348: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x118348u;
    {
        const bool branch_taken_0x118348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118348u;
        // 0x11834c: 0x25c54930  addiu       $a1, $t6, 0x4930 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 18736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118348) {
            ctx->pc = 0x11839Cu;
            return;
        }
    }
    ctx->pc = 0x118350u;
    // 0x118350: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x118350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118354: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x118354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x118358: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x118358u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x11835c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x11835cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x118360: 0x36240001  ori         $a0, $s1, 0x1
    ctx->pc = 0x118360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x118364: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x118364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x118368: 0x25c34930  addiu       $v1, $t6, 0x4930
    ctx->pc = 0x118368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 18736));
    // 0x11836c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x11836cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x118370: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x118374: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x118374u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x118378: 0xac67000c  sw          $a3, 0xC($v1)
    ctx->pc = 0x118378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
    // 0x11837c: 0xe62821  addu        $a1, $a3, $a2
    ctx->pc = 0x11837cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x118380: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x118380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x118384: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x118384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118388: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x118388u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x11838c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x11838cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x118390: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x118390u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x118394: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x118394u;
    {
        const bool branch_taken_0x118394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118394u;
        // 0x118398: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118394) {
            ctx->pc = 0x1188B4u;
            return;
        }
    }
    ctx->pc = 0x11839Cu;
}
