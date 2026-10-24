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
// Address: 0x1f74ec - 0x1f7584
void caseD_2_0x1f74ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1f74ec");
#endif

    switch (ctx->pc) {
        case 0x1f74fcu: goto label_1f74fc;
        case 0x1f752cu: goto label_1f752c;
        case 0x1f7534u: goto label_1f7534;
        case 0x1f7550u: goto label_1f7550;
        default: break;
    }

    ctx->pc = 0x1f74ecu;

    // 0x1f74ec: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x1f74ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f74f0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1f74f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1f74f4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1F74F4u;
    SET_GPR_U32(ctx, 31, 0x1F74FCu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1F74F4u, 0x1F74FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F74FCu;
label_1f74fc:
    // 0x1f74fc: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1f74fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7500: 0x910309e7  lbu         $v1, 0x9E7($t0)
    ctx->pc = 0x1f7500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2535)));
    // 0x1f7504: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F7504u;
    {
        const bool branch_taken_0x1f7504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7504) {
            ctx->pc = 0x1F7584u;
            return;
        }
    }
    ctx->pc = 0x1F750Cu;
    // 0x1f750c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7510: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1f7510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7514: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f7514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f7518: 0x24063c17  addiu       $a2, $zero, 0x3C17
    ctx->pc = 0x1f7518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15383));
    // 0x1f751c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f751cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7520: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f7520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f7524: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F7524u;
    SET_GPR_U32(ctx, 31, 0x1F752Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F7524u, 0x1F752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F752Cu;
label_1f752c:
    // 0x1f752c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F752Cu;
    SET_GPR_U32(ctx, 31, 0x1F7534u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F752Cu, 0x1F7534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7534u;
label_1f7534:
    // 0x1f7534: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f7534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f7538: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f7538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f753c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1f753cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1f7540: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1f7540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7544: 0xa44309ee  sh          $v1, 0x9EE($v0)
    ctx->pc = 0x1f7544u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2542), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f7548: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F7548u;
    SET_GPR_U32(ctx, 31, 0x1F7550u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F7548u, 0x1F7550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7550u;
label_1f7550:
    // 0x1f7550: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f7550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f7554: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f7554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f7558: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7558u;
    {
        const bool branch_taken_0x1f7558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7558) {
            ctx->pc = 0x1F7584u;
            return;
        }
    }
    ctx->pc = 0x1F7560u;
    // 0x1f7560: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1f7560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f7564: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1f7564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x1f7568: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f7568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f756c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f756cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f7570: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x1f7570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x1f7574: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1f7574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1f7578: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f7578u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f757c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F757Cu;
    SET_GPR_U32(ctx, 31, 0x1F7584u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F757Cu, 0x1F7584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7584u;
}
