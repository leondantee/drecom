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

// Function: entry_0020dd60
// Address: 0x20dd60 - 0x20de38
void entry_0020dd60_0x20dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020dd60_0x20dd60");
#endif

    switch (ctx->pc) {
        case 0x20ddbcu: goto label_20ddbc;
        case 0x20dddcu: goto label_20dddc;
        default: break;
    }

    ctx->pc = 0x20dd60u;

    // 0x20dd60: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd64: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x20dd64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x20dd68: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20dd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20dd6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20dd6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20dd70: 0x461005a  bgez        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x20DD70u;
    {
        const bool branch_taken_0x20dd70 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x20dd70) {
            ctx->pc = 0x20DEDCu;
            return;
        }
    }
    ctx->pc = 0x20DD78u;
    // 0x20dd78: 0x2402051d  addiu       $v0, $zero, 0x51D
    ctx->pc = 0x20dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1309));
    // 0x20dd7c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x20dd7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20dd80: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x20dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd84: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x20dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x20dd88: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x20dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x20dd8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x20dd8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20dd90: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x20dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20dd94: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20dd94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x20dd98: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x20dd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x20dd9c: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x20dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x20dda0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x20dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x20dda4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20dda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20dda8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x20dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20ddac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20ddb0: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x20ddb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x20ddb4: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x20DDB4u;
    SET_GPR_U32(ctx, 31, 0x20DDBCu);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x20DDBCu;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20DDBCu) { return; }
    ctx->pc = 0x20DDBCu;
label_20ddbc:
    // 0x20ddbc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x20ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x20ddc0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x20ddc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x20ddc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ddc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20ddc8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x20ddc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20ddcc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x20ddccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20ddd0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x20ddd0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ddd4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x20DDD4u;
    SET_GPR_U32(ctx, 31, 0x20DDDCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x20DDD4u, 0x20DDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DDDCu;
label_20dddc:
    // 0x20dddc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x20dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dde0: 0x908310a8  lbu         $v1, 0x10A8($a0)
    ctx->pc = 0x20dde0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4264)));
    // 0x20dde4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x20dde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x20dde8: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x20dde8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x20ddec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20ddf0: 0x8c631340  lw          $v1, 0x1340($v1)
    ctx->pc = 0x20ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4928)));
    // 0x20ddf4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x20ddf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20ddf8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x20DDF8u;
    {
        const bool branch_taken_0x20ddf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ddf8) {
            ctx->pc = 0x20DE70u;
            return;
        }
    }
    ctx->pc = 0x20DE00u;
    // 0x20de00: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x20de00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x20de04: 0x8c259310  lw          $a1, -0x6CF0($at)
    ctx->pc = 0x20de04u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x619310u));
    // 0x20de08: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x20de08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x20de0c: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x20de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x20de10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x20de10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x20de14: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x20de14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x20de18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20de1c: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x20de1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x20de20: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x20de20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20de24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20de28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DE28u;
    {
        const bool branch_taken_0x20de28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20de28) {
            ctx->pc = 0x20DE38u;
            return;
        }
    }
    ctx->pc = 0x20DE30u;
    // 0x20de30: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x20DE30u;
    {
        const bool branch_taken_0x20de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20de30) {
            ctx->pc = 0x20DE38u;
            return;
        }
    }
    ctx->pc = 0x20DE38u;
}
