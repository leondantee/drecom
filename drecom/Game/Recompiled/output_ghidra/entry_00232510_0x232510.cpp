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

// Function: entry_00232510
// Address: 0x232510 - 0x2325a0
void entry_00232510_0x232510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232510_0x232510");
#endif

    switch (ctx->pc) {
        case 0x232584u: goto label_232584;
        default: break;
    }

    ctx->pc = 0x232510u;

    // 0x232510: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x232510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232514: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x232514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232518: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x232518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23251c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23251cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232520: 0x0  nop
    ctx->pc = 0x232520u;
    // NOP
    // 0x232524: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x232524u;
    {
        const bool branch_taken_0x232524 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232524) {
            ctx->pc = 0x2325A0u;
            return;
        }
    }
    ctx->pc = 0x23252Cu;
    // 0x23252c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x23252cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232530: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x232530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x232534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232538: 0x0  nop
    ctx->pc = 0x232538u;
    // NOP
    // 0x23253c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23253cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232540: 0x0  nop
    ctx->pc = 0x232540u;
    // NOP
    // 0x232544: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x232544u;
    {
        const bool branch_taken_0x232544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x232544) {
            ctx->pc = 0x2325A0u;
            return;
        }
    }
    ctx->pc = 0x23254Cu;
    // 0x23254c: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x23254cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x232550: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x232550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232554: 0xa464002a  sh          $a0, 0x2A($v1)
    ctx->pc = 0x232554u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 4));
    // 0x232558: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x232558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23255c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x23255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x232560: 0xa0830029  sb          $v1, 0x29($a0)
    ctx->pc = 0x232560u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x232564: 0x3c03469c  lui         $v1, 0x469C
    ctx->pc = 0x232564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18076 << 16));
    // 0x232568: 0x34654000  ori         $a1, $v1, 0x4000
    ctx->pc = 0x232568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x23256c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x23256cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232570: 0x24040527  addiu       $a0, $zero, 0x527
    ctx->pc = 0x232570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1319));
    // 0x232574: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x232574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x232578: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x232578u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23257c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23257Cu;
    SET_GPR_U32(ctx, 31, 0x232584u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23257Cu, 0x232584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232584u;
label_232584:
    // 0x232584: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x232584u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x232588: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x232588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x23258c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x23258cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x232590: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x232590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x232594: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x232594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x232598: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x232598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23259c: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x23259cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x2325a0u;
}
