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

// Function: caseD_3
// Address: 0x120790 - 0x1208b8
void caseD_3_0x120790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x120790");
#endif

    ctx->pc = 0x120790u;

    // 0x120790: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120794: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120798: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12079c: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x12079cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x1207a0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1207a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1207a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207a8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207ac: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x1207acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x1207b0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1207b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1207b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207b8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207bc: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1207bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x1207c0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1207c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1207c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207c8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207cc: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x1207ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x1207d0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1207d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1207d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207d8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207dc: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1207dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x1207e0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1207e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1207e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207e8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207ec: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x1207ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x1207f0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1207f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1207f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1207f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207f8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1207f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1207fc: 0xac640330  sw          $a0, 0x330($v1)
    ctx->pc = 0x1207fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 4));
    // 0x120800: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120804: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120808: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12080c: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x12080cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x120810: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120814: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120818: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12081c: 0xac640338  sw          $a0, 0x338($v1)
    ctx->pc = 0x12081cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 824), GPR_U32(ctx, 4));
    // 0x120820: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120824: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120828: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12082c: 0xac640570  sw          $a0, 0x570($v1)
    ctx->pc = 0x12082cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
    // 0x120830: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120834: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120838: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12083c: 0xac640574  sw          $a0, 0x574($v1)
    ctx->pc = 0x12083cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1396), GPR_U32(ctx, 4));
    // 0x120840: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120844: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120848: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12084c: 0xac640578  sw          $a0, 0x578($v1)
    ctx->pc = 0x12084cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1400), GPR_U32(ctx, 4));
    // 0x120850: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120854: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120858: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12085c: 0xac6407b0  sw          $a0, 0x7B0($v1)
    ctx->pc = 0x12085cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 4));
    // 0x120860: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120864: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120868: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12086c: 0xac6407b4  sw          $a0, 0x7B4($v1)
    ctx->pc = 0x12086cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1972), GPR_U32(ctx, 4));
    // 0x120870: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120874: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120878: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12087c: 0xac6407b8  sw          $a0, 0x7B8($v1)
    ctx->pc = 0x12087cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1976), GPR_U32(ctx, 4));
    // 0x120880: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120884: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120888: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12088c: 0xac640840  sw          $a0, 0x840($v1)
    ctx->pc = 0x12088cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 4));
    // 0x120890: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x120894: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120898: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12089c: 0xac640844  sw          $a0, 0x844($v1)
    ctx->pc = 0x12089cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2116), GPR_U32(ctx, 4));
    // 0x1208a0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1208a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1208a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208a8: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1208a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1208ac: 0xac640848  sw          $a0, 0x848($v1)
    ctx->pc = 0x1208acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2120), GPR_U32(ctx, 4));
    // 0x1208b0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1208B0u;
    {
        const bool branch_taken_0x1208b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1208b0) {
            ctx->pc = 0x120B00u;
            return;
        }
    }
    ctx->pc = 0x1208B8u;
}
