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

// Function: entry_0020c060
// Address: 0x20c060 - 0x20c114
void entry_0020c060_0x20c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c060_0x20c060");
#endif

    switch (ctx->pc) {
        case 0x20c0a8u: goto label_20c0a8;
        case 0x20c0d8u: goto label_20c0d8;
        default: break;
    }

    ctx->pc = 0x20c060u;

    // 0x20c060: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x20c060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20c064: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20c068: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x20c068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x20c06c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x20c06cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20c070: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x20c070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c074: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x20c074u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c078: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20c07c: 0x2446a2a0  addiu       $a2, $v0, -0x5D60
    ctx->pc = 0x20c07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
    // 0x20c080: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x20c080u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c084: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20c084u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20c088: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x20c088u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20c08c: 0xc7ac00f4  lwc1        $f12, 0xF4($sp)
    ctx->pc = 0x20c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c090: 0xc7ae00f8  lwc1        $f14, 0xF8($sp)
    ctx->pc = 0x20c090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20c094: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20c098: 0x244aa2d0  addiu       $t2, $v0, -0x5D30
    ctx->pc = 0x20c098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943440));
    // 0x20c09c: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x20c09cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c0a0: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x20C0A0u;
    SET_GPR_U32(ctx, 31, 0x20C0A8u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x20C0A0u, 0x20C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0A8u;
label_20c0a8:
    // 0x20c0a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20c0ac: 0x24508c70  addiu       $s0, $v0, -0x7390
    ctx->pc = 0x20c0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
    // 0x20c0b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x20c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x20c0b4: 0x2442a2a0  addiu       $v0, $v0, -0x5D60
    ctx->pc = 0x20c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943392));
    // 0x20c0b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20c0b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388C70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388C70u, _value); } while (0);
    // 0x20c0bc: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x20c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x20c0c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x20c0c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x388C74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388C74u, _value); } while (0);
    // 0x20c0c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20c0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c0c8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x20c0c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20c0cc: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x20c0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x20c0d0: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x20C0D0u;
    SET_GPR_U32(ctx, 31, 0x20C0D8u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x20C0D0u, 0x20C0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C0D8u;
label_20c0d8:
    // 0x20c0d8: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x20c0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c0dc: 0x84a4127c  lh          $a0, 0x127C($a1)
    ctx->pc = 0x20c0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x20c0e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20c0e4: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x20c0e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x20c0e8: 0xa4a3127c  sh          $v1, 0x127C($a1)
    ctx->pc = 0x20c0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x20c0ec: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c0f0: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x20c0f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x20c0f4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20c0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20c0f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20c0f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20c0fc: 0x2861000a  slti        $at, $v1, 0xA
    ctx->pc = 0x20c0fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x20c100: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C100u;
    {
        const bool branch_taken_0x20c100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c100) {
            ctx->pc = 0x20C114u;
            return;
        }
    }
    ctx->pc = 0x20C108u;
    // 0x20c108: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20c108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20c10c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20c110: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x20c110u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x20c114u;
}
