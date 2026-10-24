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

// Function: entry_0030495c
// Address: 0x30495c - 0x304a44
void entry_0030495c_0x30495c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030495c_0x30495c");
#endif

    switch (ctx->pc) {
        case 0x3049bcu: goto label_3049bc;
        case 0x304a24u: goto label_304a24;
        default: break;
    }

    ctx->pc = 0x30495cu;

    // 0x30495c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x30495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304960: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x304960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x304964: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x304964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x304968: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x304968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x30496c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x30496Cu;
    {
        const bool branch_taken_0x30496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30496c) {
            ctx->pc = 0x304A44u;
            return;
        }
    }
    ctx->pc = 0x304974u;
    // 0x304974: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x304978: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x304978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x30497c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x30497Cu;
    {
        const bool branch_taken_0x30497c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30497c) {
            ctx->pc = 0x304A44u;
            return;
        }
    }
    ctx->pc = 0x304984u;
    // 0x304984: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x304984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x304988: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x304988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x30498c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x30498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x304990: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x304990u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x399530u));
    // 0x304994: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x304994u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x304998: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x304998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x30499c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3049a0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x3049a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3049a4: 0x24450300  addiu       $a1, $v0, 0x300
    ctx->pc = 0x3049a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x3049a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3049a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3049ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3049acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3049b0: 0x24478c40  addiu       $a3, $v0, -0x73C0
    ctx->pc = 0x3049b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937664));
    // 0x3049b4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x3049B4u;
    SET_GPR_U32(ctx, 31, 0x3049BCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3049B4u, 0x3049BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3049BCu;
label_3049bc:
    // 0x3049bc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3049bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3049c0: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3049C0u;
    {
        const bool branch_taken_0x3049c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3049c0) {
            ctx->pc = 0x304A44u;
            return;
        }
    }
    ctx->pc = 0x3049C8u;
    // 0x3049c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3049c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3049cc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3049ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3049d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3049d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3049d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3049d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3049d8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3049d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3049dc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x3049dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x3049e0: 0x24020509  addiu       $v0, $zero, 0x509
    ctx->pc = 0x3049e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x3049e4: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x3049e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3049e8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x3049e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3049ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3049ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3049f0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x3049f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3049f4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3049f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3049f8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3049f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3049fc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3049fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x304a00: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x304a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x304a04: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x304a04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x304a08: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x304a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x304a0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304a0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304a10: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x304a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304a14: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x304a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304a18: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x304a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x304a1c: 0xc040c70  jal         func_1031C0
    ctx->pc = 0x304A1Cu;
    SET_GPR_U32(ctx, 31, 0x304A24u);
    ctx->pc = 0x1031C0u;
    {
        ctx->pc = 0x304A24u;
        ps2_stubs::sceVu0InterVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x304A24u) { return; }
    ctx->pc = 0x304A24u;
label_304a24:
    // 0x304a24: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x304a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x304a28: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x304a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x304a2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304a30: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x304a30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x304a34: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x304a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x304a38: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x304a38u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304a3c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x304A3Cu;
    SET_GPR_U32(ctx, 31, 0x304A44u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x304A3Cu, 0x304A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304A44u;
}
