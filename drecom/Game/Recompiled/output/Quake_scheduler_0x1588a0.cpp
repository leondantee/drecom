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

// Function: Quake_scheduler
// Address: 0x1588a0 - 0x158998
void Quake_scheduler_0x1588a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Quake_scheduler_0x1588a0");
#endif

    switch (ctx->pc) {
        case 0x1588c0u: goto label_1588c0;
        default: break;
    }

    ctx->pc = 0x1588a0u;

    // 0x1588a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1588a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1588a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1588a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1588a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1588a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1588ac: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1588acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1588b0: 0x2470f860  addiu       $s0, $v1, -0x7A0
    ctx->pc = 0x1588b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965344));
    // 0x1588b4: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1588b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1588b8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1588B8u;
    {
        const bool branch_taken_0x1588b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1588b8) {
            ctx->pc = 0x158978u;
            goto label_158978;
        }
    }
    ctx->pc = 0x1588C0u;
label_1588c0:
    // 0x1588c0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1588c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1588c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1588c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1588c8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1588c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1588cc: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1588CCu;
    {
        const bool branch_taken_0x1588cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1588cc) {
            ctx->pc = 0x158970u;
            goto label_158970;
        }
    }
    ctx->pc = 0x1588D4u;
    // 0x1588d4: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1588d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1588d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1588D8u;
    {
        const bool branch_taken_0x1588d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1588d8) {
            ctx->pc = 0x1588F4u;
            goto label_1588f4;
        }
    }
    ctx->pc = 0x1588E0u;
    // 0x1588e0: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x1588e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1588e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1588e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1588e8: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1588e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1588ec: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1588ECu;
    {
        const bool branch_taken_0x1588ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1588ec) {
            ctx->pc = 0x158970u;
            goto label_158970;
        }
    }
    ctx->pc = 0x1588F4u;
label_1588f4:
    // 0x1588f4: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x1588f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1588f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1588f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1588fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1588fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x158900: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x158900u;
    {
        const bool branch_taken_0x158900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158900) {
            ctx->pc = 0x15892Cu;
            goto label_15892c;
        }
    }
    ctx->pc = 0x158908u;
    // 0x158908: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x158908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15890c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x15890cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x158910: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x158910u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x158914: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x158914u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x158918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x158918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15891c: 0x0  nop
    ctx->pc = 0x15891cu;
    // NOP
    // 0x158920: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x158920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x158924: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x158924u;
    {
        const bool branch_taken_0x158924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158924) {
            ctx->pc = 0x158970u;
            goto label_158970;
        }
    }
    ctx->pc = 0x15892Cu;
label_15892c:
    // 0x15892c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x15892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158930: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158934: 0xc420f850  lwc1        $f0, -0x7B0($at)
    ctx->pc = 0x158934u;
    { uint32_t bits = FAST_READ32(0x3EF850u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158938: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15893c: 0x0  nop
    ctx->pc = 0x15893cu;
    // NOP
    // 0x158940: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x158940u;
    {
        const bool branch_taken_0x158940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158940) {
            ctx->pc = 0x158958u;
            goto label_158958;
        }
    }
    ctx->pc = 0x158948u;
    // 0x158948: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x158948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15894c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15894cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158950: 0xe420f850  swc1        $f0, -0x7B0($at)
    ctx->pc = 0x158950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF850u, _value); } while (0); }
    // 0x158954: 0x0  nop
    ctx->pc = 0x158954u;
    // NOP
label_158958:
    // 0x158958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x158958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15895c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15895cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158960: 0xac23f848  sw          $v1, -0x7B8($at)
    ctx->pc = 0x158960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EF848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF848u, _value); } while (0);
    // 0x158964: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x158964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x158968: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x158968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15896c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x15896cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_158970:
    // 0x158970: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x158970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x158974: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x158974u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_158978:
    // 0x158978: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x158978u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15897c: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x15897Cu;
    {
        const bool branch_taken_0x15897c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15897c) {
            ctx->pc = 0x1588C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1588c0;
        }
    }
    ctx->pc = 0x158984u;
    // 0x158984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x158988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15898c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15898cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x158990: 0x3e00008  jr          $ra
    ctx->pc = 0x158990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158998u;
}
