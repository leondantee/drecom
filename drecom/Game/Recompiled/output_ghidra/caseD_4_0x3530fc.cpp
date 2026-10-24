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

// Function: caseD_4
// Address: 0x3530fc - 0x35318c
void caseD_4_0x3530fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x3530fc");
#endif

    switch (ctx->pc) {
        case 0x353174u: goto label_353174;
        default: break;
    }

    ctx->pc = 0x3530fcu;

    // 0x3530fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3530fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353100: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x353100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353104: 0x8483002c  lh          $v1, 0x2C($a0)
    ctx->pc = 0x353104u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x353108: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x353108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35310c: 0xa482002c  sh          $v0, 0x2C($a0)
    ctx->pc = 0x35310cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x353110: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x353110u;
    {
        const bool branch_taken_0x353110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x353110) {
            ctx->pc = 0x35318Cu;
            return;
        }
    }
    ctx->pc = 0x353118u;
    // 0x353118: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x353118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35311c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35311cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353120: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353124: 0xa0430028  sb          $v1, 0x28($v0)
    ctx->pc = 0x353124u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x353128: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35312c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x35312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353130: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x353130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x353134: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x353134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x353138: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x353138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35313c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x35313cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x353140: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353144: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353148: 0x9042002a  lbu         $v0, 0x2A($v0)
    ctx->pc = 0x353148u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x35314c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35314cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x353150: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353154: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353158: 0x9042002b  lbu         $v0, 0x2B($v0)
    ctx->pc = 0x353158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 43)));
    // 0x35315c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x35315cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x353160: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x353160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353164: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x353164u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x353168: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x353168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35316c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x35316Cu;
    SET_GPR_U32(ctx, 31, 0x353174u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x35316Cu, 0x353174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353174u;
label_353174:
    // 0x353174: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353178: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x35317c: 0x8443002e  lh          $v1, 0x2E($v0)
    ctx->pc = 0x35317cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x353180: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x353180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353184: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x353184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x353188: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x353188u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x35318cu;
}
