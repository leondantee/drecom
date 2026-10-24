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

// Function: entry_001ba4ec
// Address: 0x1ba4ec - 0x1ba574
void entry_001ba4ec_0x1ba4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba4ec_0x1ba4ec");
#endif

    switch (ctx->pc) {
        case 0x1ba4f8u: goto label_1ba4f8;
        default: break;
    }

    ctx->pc = 0x1ba4ecu;

    // 0x1ba4ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ba4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba4f0: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BA4F0u;
    SET_GPR_U32(ctx, 31, 0x1BA4F8u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BA4F0u, 0x1BA4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4F8u;
label_1ba4f8:
    // 0x1ba4f8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1ba4f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba4fc: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BA4FCu;
    {
        const bool branch_taken_0x1ba4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4fc) {
            ctx->pc = 0x1BA584u;
            return;
        }
    }
    ctx->pc = 0x1BA504u;
    // 0x1ba504: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba508: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ba508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ba50c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1ba50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1ba510: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ba510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ba514: 0x106001cf  beqz        $v1, . + 4 + (0x1CF << 2)
    ctx->pc = 0x1BA514u;
    {
        const bool branch_taken_0x1ba514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba514) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA51Cu;
    // 0x1ba51c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1ba51cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba520: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1ba520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ba524: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1ba524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1ba528: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ba528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ba52c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ba52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ba530: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1ba530u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1ba534: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba538: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1ba538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1ba53c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ba53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ba540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ba540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ba544: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BA544u;
    {
        const bool branch_taken_0x1ba544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba544) {
            ctx->pc = 0x1BA574u;
            return;
        }
    }
    ctx->pc = 0x1BA54Cu;
    // 0x1ba54c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba550: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA550u;
    {
        const bool branch_taken_0x1ba550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba550) {
            ctx->pc = 0x1BA574u;
            return;
        }
    }
    ctx->pc = 0x1BA558u;
    // 0x1ba558: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ba558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba55c: 0x108301bd  beq         $a0, $v1, . + 4 + (0x1BD << 2)
    ctx->pc = 0x1BA55Cu;
    {
        const bool branch_taken_0x1ba55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba55c) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA564u;
    // 0x1ba564: 0x108001bb  beqz        $a0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x1BA564u;
    {
        const bool branch_taken_0x1ba564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba564) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA56Cu;
    // 0x1ba56c: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x1BA56Cu;
    {
        const bool branch_taken_0x1ba56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba56c) {
            ctx->pc = 0x1BAC54u;
            return;
        }
    }
    ctx->pc = 0x1BA574u;
}
