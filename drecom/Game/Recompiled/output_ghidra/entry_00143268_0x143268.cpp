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

// Function: entry_00143268
// Address: 0x143268 - 0x143328
void entry_00143268_0x143268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143268_0x143268");
#endif

    ctx->pc = 0x143268u;

    // 0x143268: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x143268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x14326c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x14326Cu;
    {
        const bool branch_taken_0x14326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14326c) {
            ctx->pc = 0x143328u;
            return;
        }
    }
    ctx->pc = 0x143274u;
    // 0x143274: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x143274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x143278: 0x24479110  addiu       $a3, $v0, -0x6EF0
    ctx->pc = 0x143278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938896));
    // 0x14327c: 0x70e08628  paddub      $s0, $a3, $zero
    ctx->pc = 0x14327cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x143280: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x143280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x143284: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x143284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x143288: 0x3c0b6400  lui         $t3, 0x6400
    ctx->pc = 0x143288u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)25600 << 16));
    // 0x14328c: 0x356a2b16  ori         $t2, $t3, 0x2B16
    ctx->pc = 0x14328cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)11030);
    // 0x143290: 0xae0a0004  sw          $t2, 0x4($s0)
    ctx->pc = 0x143290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 10));
    // 0x143294: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x143294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x143298: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x143298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x14329c: 0x131a00  sll         $v1, $s3, 8
    ctx->pc = 0x14329cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x1432a0: 0x263b825  or          $s7, $s3, $v1
    ctx->pc = 0x1432a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1432a4: 0x571825  or          $v1, $v0, $s7
    ctx->pc = 0x1432a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x1432a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1432a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1432ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1432acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1432b0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1432b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1432b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1432b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1432b8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1432b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1432bc: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1432bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1432c0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1432c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1432c4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1432c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1432c8: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x1432c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1432cc: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x1432ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1432d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1432d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1432d4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1432d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1432d8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1432d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1432dc: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x1432dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1432e0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1432e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1432e4: 0x3402fffc  ori         $v0, $zero, 0xFFFC
    ctx->pc = 0x1432e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x1432e8: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x1432e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1432ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1432ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1432f0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1432f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1432f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1432f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1432f8: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x1432f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x1432fc: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x1432fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x143300: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x143300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x143304: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x143304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x143308: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x143308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x14330c: 0x24a2ccf0  addiu       $v0, $a1, -0x3310
    ctx->pc = 0x14330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
    // 0x143310: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x143310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x143314: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x143314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x143318: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x143318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
    // 0x14331c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x14331cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x143320: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x143320u;
    SET_GPR_U32(ctx, 31, 0x143328u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x143320u, 0x143328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143328u;
}
