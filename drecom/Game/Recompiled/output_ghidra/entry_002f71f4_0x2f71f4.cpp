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

// Function: entry_002f71f4
// Address: 0x2f71f4 - 0x2f72e4
void entry_002f71f4_0x2f71f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f71f4_0x2f71f4");
#endif

    switch (ctx->pc) {
        case 0x2f7258u: goto label_2f7258;
        case 0x2f72c0u: goto label_2f72c0;
        default: break;
    }

    ctx->pc = 0x2f71f4u;

    // 0x2f71f4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f71f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f71f8: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2f71f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2f71fc: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2f71fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2f7200: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f7200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f7204: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f7204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f7208: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f7208u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f720c: 0x42a00  sll         $a1, $a0, 8
    ctx->pc = 0x2f720cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2f7210: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7214: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f7214u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f7218: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x2f7218u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f721c: 0x74080  sll         $t0, $a3, 2
    ctx->pc = 0x2f721cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2f7220: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x2f7220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2f7224: 0x312aff00  andi        $t2, $t1, 0xFF00
    ctx->pc = 0x2f7224u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65280);
    // 0x2f7228: 0xa4202  srl         $t0, $t2, 8
    ctx->pc = 0x2f7228u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x2f722c: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x2f722cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2f7230: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f7230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f7234: 0xac297508  sw          $t1, 0x7508($at)
    ctx->pc = 0x2f7234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f7238: 0x312a00ff  andi        $t2, $t1, 0xFF
    ctx->pc = 0x2f7238u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2f723c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2f723cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2f7240: 0x143001b  divu        $zero, $t2, $v1
    ctx->pc = 0x2f7240u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x2f7244: 0x0  nop
    ctx->pc = 0x2f7244u;
    // NOP
    // 0x2f7248: 0x0  nop
    ctx->pc = 0x2f7248u;
    // NOP
    // 0x2f724c: 0x8010  mfhi        $s0
    ctx->pc = 0x2f724cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x2f7250: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F7250u;
    SET_GPR_U32(ctx, 31, 0x2F7258u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F7250u, 0x2F7258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7258u;
label_2f7258:
    // 0x2f7258: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2f7258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2f725c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f725cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f7260: 0x0  nop
    ctx->pc = 0x2f7260u;
    // NOP
    // 0x2f7264: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f7264u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f7268: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x2f7268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x2f726c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f726cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f7270: 0x0  nop
    ctx->pc = 0x2f7270u;
    // NOP
    // 0x2f7274: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2f7274u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f7278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f727c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f727cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7280: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x2f7280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f7284: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f7284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f7288: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f7288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f728c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2f728cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2f7290: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x2f7290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f7294: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x2f7294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x2f7298: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2f7298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f729c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2f729cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f72a0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f72a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f72a4: 0x8ce700c4  lw          $a3, 0xC4($a3)
    ctx->pc = 0x2f72a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 196)));
    // 0x2f72a8: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x2f72a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f72ac: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x2f72acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f72b0: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2f72b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f72b4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f72b4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f72b8: 0xc0c8cc0  jal         func_323300
    ctx->pc = 0x2F72B8u;
    SET_GPR_U32(ctx, 31, 0x2F72C0u);
    ctx->pc = 0x323300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323300u, 0x2F72B8u, 0x2F72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72C0u;
label_2f72c0:
    // 0x2f72c0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2f72c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f72c4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f72c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f72c8: 0xa06a0100  sb          $t2, 0x100($v1)
    ctx->pc = 0x2f72c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f72cc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2f72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2f72d0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2f72d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2f72d4: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x2f72d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f72d8: 0xa0830101  sb          $v1, 0x101($a0)
    ctx->pc = 0x2f72d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 257), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f72dc: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x2F72DCu;
    {
        const bool branch_taken_0x2f72dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f72dc) {
            ctx->pc = 0x2F7690u;
            return;
        }
    }
    ctx->pc = 0x2F72E4u;
}
