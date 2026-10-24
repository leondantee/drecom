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

// Function: entry_0030e7d8
// Address: 0x30e7d8 - 0x30e870
void entry_0030e7d8_0x30e7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030e7d8_0x30e7d8");
#endif

    switch (ctx->pc) {
        case 0x30e860u: goto label_30e860;
        default: break;
    }

    ctx->pc = 0x30e7d8u;

    // 0x30e7d8: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x30e7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x30e7dc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30E7DCu;
    {
        const bool branch_taken_0x30e7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e7dc) {
            ctx->pc = 0x30E770u;
            return;
        }
    }
    ctx->pc = 0x30E7E4u;
    // 0x30e7e4: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x30e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e7e8: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x30e7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e7ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30e7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x30e7f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x30e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x30e7f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x30e7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30e7f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x30e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x30e7fc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x30e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30e800: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x30e800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x30e804: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x30e804u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x30e808: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30e808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x30e80c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x30e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x30e810: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x30e810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x30e814: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30e814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30e818: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x30e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30e81c: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x30e81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x30e820: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x30e820u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x30e824: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30e824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30e828: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x30e828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x30e82c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x30e82cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x30e830: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30e830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30e834: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x30e834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30e838: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30E838u;
    {
        const bool branch_taken_0x30e838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e838) {
            ctx->pc = 0x30E870u;
            return;
        }
    }
    ctx->pc = 0x30E840u;
    // 0x30e840: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e844: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x30e844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e848: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30e848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30e84c: 0x24062832  addiu       $a2, $zero, 0x2832
    ctx->pc = 0x30e84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10290));
    // 0x30e850: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30e850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e854: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30e854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30e858: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30E858u;
    SET_GPR_U32(ctx, 31, 0x30E860u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30E858u, 0x30E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E860u;
label_30e860:
    // 0x30e860: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x30e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x30e864: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30e864u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x30e868: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30E868u;
    {
        const bool branch_taken_0x30e868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30e868) {
            ctx->pc = 0x30E8A0u;
            return;
        }
    }
    ctx->pc = 0x30E870u;
}
