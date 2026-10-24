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

// Function: entry_00187484
// Address: 0x187484 - 0x18751c
void entry_00187484_0x187484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187484_0x187484");
#endif

    switch (ctx->pc) {
        case 0x1874e0u: goto label_1874e0;
        default: break;
    }

    ctx->pc = 0x187484u;

    // 0x187484: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x187484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x187488: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x187488u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x18748c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x18748cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x187490: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x187490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x187494: 0x1060011a  beqz        $v1, . + 4 + (0x11A << 2)
    ctx->pc = 0x187494u;
    {
        const bool branch_taken_0x187494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x187494) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x18749Cu;
    // 0x18749c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x18749cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1874a0: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x1874a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x1874a4: 0x10600116  beqz        $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x1874A4u;
    {
        const bool branch_taken_0x1874a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1874a4) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x1874ACu;
    // 0x1874ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1874acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1874b0: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x1874b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x1874b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1874b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1874b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1874b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1874bc: 0x14600110  bnez        $v1, . + 4 + (0x110 << 2)
    ctx->pc = 0x1874BCu;
    {
        const bool branch_taken_0x1874bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1874bc) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x1874C4u;
    // 0x1874c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1874c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1874c8: 0x8422f138  lh          $v0, -0xEC8($at)
    ctx->pc = 0x1874c8u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x47F138u));
    // 0x1874cc: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x1874ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1874d0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1874d0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1874d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1874d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1874d8: 0xc062080  jal         func_188200
    ctx->pc = 0x1874D8u;
    SET_GPR_U32(ctx, 31, 0x1874E0u);
    ctx->pc = 0x188200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188200u, 0x1874D8u, 0x1874E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1874E0u;
label_1874e0:
    // 0x1874e0: 0x938380ac  lbu         $v1, -0x7F54($gp)
    ctx->pc = 0x1874e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x1874e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1874e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1874e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1874e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1874ec: 0x10830104  beq         $a0, $v1, . + 4 + (0x104 << 2)
    ctx->pc = 0x1874ECu;
    {
        const bool branch_taken_0x1874ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1874ec) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x1874F4u;
    // 0x1874f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1874f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1874f8: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1874F8u;
    {
        const bool branch_taken_0x1874f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1874f8) {
            ctx->pc = 0x187544u;
            return;
        }
    }
    ctx->pc = 0x187500u;
    // 0x187500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187504: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x187504u;
    {
        const bool branch_taken_0x187504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x187504) {
            ctx->pc = 0x18751Cu;
            return;
        }
    }
    ctx->pc = 0x18750Cu;
    // 0x18750c: 0x108000fc  beqz        $a0, . + 4 + (0xFC << 2)
    ctx->pc = 0x18750Cu;
    {
        const bool branch_taken_0x18750c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18750c) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x187514u;
    // 0x187514: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x187514u;
    {
        const bool branch_taken_0x187514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187514) {
            ctx->pc = 0x187900u;
            return;
        }
    }
    ctx->pc = 0x18751Cu;
}
