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

// Function: entry_00370050
// Address: 0x370050 - 0x370100
void entry_00370050_0x370050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370050_0x370050");
#endif

    switch (ctx->pc) {
        case 0x37007cu: goto label_37007c;
        default: break;
    }

    ctx->pc = 0x370050u;

    // 0x370050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x370050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370054: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370058: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x370058u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37005c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370060: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370064: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x370064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x370068: 0x3406b402  ori         $a2, $zero, 0xB402
    ctx->pc = 0x370068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46082);
    // 0x37006c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37006cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370070: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x370070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x370074: 0xc0965d0  jal         func_259740
    ctx->pc = 0x370074u;
    SET_GPR_U32(ctx, 31, 0x37007Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x370074u, 0x37007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37007Cu;
label_37007c:
    // 0x37007c: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x37007cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x370080: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370084: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x370084u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x370088: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37008c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x37008cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x370090: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370094: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x370094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x370098: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x370098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x37009c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700a0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3700A0u;
    {
        const bool branch_taken_0x3700a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3700a0) {
            ctx->pc = 0x370100u;
            return;
        }
    }
    ctx->pc = 0x3700A8u;
    // 0x3700a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3700a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3700ac: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3700acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3700b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3700b4: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3700b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3700b8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3700b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3700bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3700bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3700c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3700c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3700c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3700c8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3700c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3700cc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x3700ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3700d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3700d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3700d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3700d8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3700d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3700dc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x3700dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3700e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3700e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700e4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3700e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3700e8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3700e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3700ec: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x3700ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3700f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3700f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3700f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x3700f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3700f8: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x3700f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3700fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3700fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x370100u;
}
