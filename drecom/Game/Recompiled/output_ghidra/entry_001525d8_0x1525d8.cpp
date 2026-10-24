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

// Function: entry_001525d8
// Address: 0x1525d8 - 0x1526a0
void entry_001525d8_0x1525d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001525d8_0x1525d8");
#endif

    switch (ctx->pc) {
        case 0x152664u: goto label_152664;
        default: break;
    }

    ctx->pc = 0x1525d8u;

    // 0x1525d8: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1525d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x1525dc: 0x104001a4  beqz        $v0, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x1525DCu;
    {
        const bool branch_taken_0x1525dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525dc) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x1525E4u;
    // 0x1525e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1525e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1525e8: 0x8c27a4a8  lw          $a3, -0x5B58($at)
    ctx->pc = 0x1525e8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1525ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1525ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1525f0: 0xe43025  or          $a2, $a3, $a0
    ctx->pc = 0x1525f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1525f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1525f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1525f8: 0xac26a4a8  sw          $a2, -0x5B58($at)
    ctx->pc = 0x1525f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
    // 0x1525fc: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x1525fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x152600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152604: 0x0  nop
    ctx->pc = 0x152604u;
    // NOP
    // 0x152608: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15260c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15260cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152610: 0x0  nop
    ctx->pc = 0x152610u;
    // NOP
    // 0x152614: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152618: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x152618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x15261c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15261cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152620: 0x0  nop
    ctx->pc = 0x152620u;
    // NOP
    // 0x152624: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x152624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x152628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15262c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15262cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152630: 0x0  nop
    ctx->pc = 0x152630u;
    // NOP
    // 0x152634: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x152634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x152638: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x152638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15263c: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x15263cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x152640: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x152640u;
    {
        const bool branch_taken_0x152640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152640) {
            ctx->pc = 0x1526A0u;
            return;
        }
    }
    ctx->pc = 0x152648u;
    // 0x152648: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x152648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15264c: 0x2444a4a0  addiu       $a0, $v0, -0x5B60
    ctx->pc = 0x15264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x152650: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152650u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152654: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x152654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152658: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x152658u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x15265c: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x15265Cu;
    SET_GPR_U32(ctx, 31, 0x152664u);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x15265Cu, 0x152664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152664u;
label_152664:
    // 0x152664: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152664u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152668: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x152668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15266c: 0x84c215ec  lh          $v0, 0x15EC($a2)
    ctx->pc = 0x15266cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 5612)));
    // 0x152670: 0x2442ffa6  addiu       $v0, $v0, -0x5A
    ctx->pc = 0x152670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967206));
    // 0x152674: 0xa4c215ec  sh          $v0, 0x15EC($a2)
    ctx->pc = 0x152674u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x152678: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x152678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15267c: 0x844315ec  lh          $v1, 0x15EC($v0)
    ctx->pc = 0x15267cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x152680: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x152680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152684: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x152684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x152688: 0x4410179  bgez        $v0, . + 4 + (0x179 << 2)
    ctx->pc = 0x152688u;
    {
        const bool branch_taken_0x152688 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x152688) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x152690u;
    // 0x152690: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x152690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152694: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x152694u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x152698: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x152698u;
    {
        const bool branch_taken_0x152698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152698) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x1526A0u;
}
