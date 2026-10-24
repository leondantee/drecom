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

// Function: entry_00257490
// Address: 0x257490 - 0x257500
void entry_00257490_0x257490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257490_0x257490");
#endif

    ctx->pc = 0x257490u;

    // 0x257490: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x257490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x257494: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x257494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x257498: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x257498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x25749c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x25749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2574a0: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x2574a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2574a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2574a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2574a8: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2574a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2574ac: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2574ACu;
    {
        const bool branch_taken_0x2574ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2574ac) {
            ctx->pc = 0x257434u;
            return;
        }
    }
    ctx->pc = 0x2574B4u;
    // 0x2574b4: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x2574b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2574b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2574b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2574bc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2574bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2574c0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2574c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2574c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2574c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2574c8: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x2574c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2574cc: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x2574ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x2574d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2574d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2574d4: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x2574d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x2574d8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2574d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2574dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2574dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2574e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2574E0u;
    {
        const bool branch_taken_0x2574e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2574e0) {
            ctx->pc = 0x257500u;
            return;
        }
    }
    ctx->pc = 0x2574E8u;
    // 0x2574e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2574e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2574ec: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x2574ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x2574f0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2574f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2574f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2574f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2574f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2574F8u;
    {
        const bool branch_taken_0x2574f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2574f8) {
            ctx->pc = 0x257510u;
            return;
        }
    }
    ctx->pc = 0x257500u;
}
