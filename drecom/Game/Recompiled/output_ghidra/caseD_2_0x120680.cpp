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

// Function: caseD_2
// Address: 0x120680 - 0x120790
void caseD_2_0x120680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x120680");
#endif

    ctx->pc = 0x120680u;

    // 0x120680: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120684: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120688: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12068c: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x12068cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x120690: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120694: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120698: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12069c: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x12069cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x1206a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206a4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206a8: 0xac600068  sw          $zero, 0x68($v1)
    ctx->pc = 0x1206a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
    // 0x1206ac: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1206acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1206b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206b4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206b8: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x1206b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x1206bc: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1206bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1206c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206c4: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206c8: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x1206c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x1206cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206d0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206d4: 0xac6000f8  sw          $zero, 0xF8($v1)
    ctx->pc = 0x1206d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 0));
    // 0x1206d8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1206d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1206dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206e0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206e4: 0xac640330  sw          $a0, 0x330($v1)
    ctx->pc = 0x1206e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 4));
    // 0x1206e8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1206e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1206ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1206f4: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x1206f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x1206f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1206f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1206fc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1206fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120700: 0xac600338  sw          $zero, 0x338($v1)
    ctx->pc = 0x120700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 824), GPR_U32(ctx, 0));
    // 0x120704: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120708: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12070c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x12070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120710: 0xac640570  sw          $a0, 0x570($v1)
    ctx->pc = 0x120710u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
    // 0x120714: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120718: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12071c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x12071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120720: 0xac640574  sw          $a0, 0x574($v1)
    ctx->pc = 0x120720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1396), GPR_U32(ctx, 4));
    // 0x120724: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120728: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12072c: 0xac600578  sw          $zero, 0x578($v1)
    ctx->pc = 0x12072cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1400), GPR_U32(ctx, 0));
    // 0x120730: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120734: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120738: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12073c: 0xac6407b0  sw          $a0, 0x7B0($v1)
    ctx->pc = 0x12073cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 4));
    // 0x120740: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x120740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120744: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120748: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x12074c: 0xac6407b4  sw          $a0, 0x7B4($v1)
    ctx->pc = 0x12074cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1972), GPR_U32(ctx, 4));
    // 0x120750: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120754: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120758: 0xac6007b8  sw          $zero, 0x7B8($v1)
    ctx->pc = 0x120758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1976), GPR_U32(ctx, 0));
    // 0x12075c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x12075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120760: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120764: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120768: 0xac640840  sw          $a0, 0x840($v1)
    ctx->pc = 0x120768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 4));
    // 0x12076c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x12076cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x120770: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x120770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120774: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120778: 0xac640844  sw          $a0, 0x844($v1)
    ctx->pc = 0x120778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2116), GPR_U32(ctx, 4));
    // 0x12077c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120780: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120784: 0xac600848  sw          $zero, 0x848($v1)
    ctx->pc = 0x120784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2120), GPR_U32(ctx, 0));
    // 0x120788: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x120788u;
    {
        const bool branch_taken_0x120788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120788) {
            ctx->pc = 0x120B00u;
            return;
        }
    }
    ctx->pc = 0x120790u;
}
