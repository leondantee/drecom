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

// Function: entry_00203238
// Address: 0x203238 - 0x203354
void entry_00203238_0x203238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203238_0x203238");
#endif

    switch (ctx->pc) {
        case 0x20329cu: goto label_20329c;
        case 0x20334cu: goto label_20334c;
        default: break;
    }

    ctx->pc = 0x203238u;

    // 0x203238: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x203238u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20323c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x20323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203240: 0xc4604854  lwc1        $f0, 0x4854($v1)
    ctx->pc = 0x203240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203244: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x203244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x203248: 0x2626ff00  addiu       $a2, $s1, -0x100
    ctx->pc = 0x203248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
    // 0x20324c: 0x2623ff00  addiu       $v1, $s1, -0x100
    ctx->pc = 0x20324cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
    // 0x203250: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x203250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x203254: 0xafa600ec  sw          $a2, 0xEC($sp)
    ctx->pc = 0x203254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 6));
    // 0x203258: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x203258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x20325c: 0x8c634838  lw          $v1, 0x4838($v1)
    ctx->pc = 0x20325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18488)));
    // 0x203260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x203260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203264: 0x0  nop
    ctx->pc = 0x203264u;
    // NOP
    // 0x203268: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x203268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20326c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x20326cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x203270: 0xc4209fa0  lwc1        $f0, -0x6060($at)
    ctx->pc = 0x203270u;
    { uint32_t bits = FAST_READ32(0x389FA0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203274: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x203274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x203278: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x203278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x20327c: 0x8fa700dc  lw          $a3, 0xDC($sp)
    ctx->pc = 0x20327cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x203280: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x203280u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x203284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x203284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203288: 0x0  nop
    ctx->pc = 0x203288u;
    // NOP
    // 0x20328c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20328cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x203290: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x203290u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x203294: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x203294u;
    SET_GPR_U32(ctx, 31, 0x20329Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x203294u, 0x20329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20329Cu;
label_20329c:
    // 0x20329c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x20329cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2032a0: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x2032a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
    // 0x2032a4: 0x7220be28  paddub      $s7, $s1, $zero
    ctx->pc = 0x2032a4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2032a8: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2032a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2032ac: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x2032acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2032b0: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x2032b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2032b4: 0x33483  sra         $a2, $v1, 18
    ctx->pc = 0x2032b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 18));
    // 0x2032b8: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2032b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2032bc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2032bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2032c0: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2032c0u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2032c4: 0xafb100e4  sw          $s1, 0xE4($sp)
    ctx->pc = 0x2032c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 17));
    // 0x2032c8: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x2032c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2032cc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2032ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2032d0: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x2032d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2032d4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x2032d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2032d8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2032d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2032dc: 0x22483  sra         $a0, $v0, 18
    ctx->pc = 0x2032dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 18));
    // 0x2032e0: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2032e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2032e4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2032e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2032e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2032e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2032ec: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2032ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2032f0: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x2032f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x2032f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2032f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2032f8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2032f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2032fc: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2032FCu;
    {
        const bool branch_taken_0x2032fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2032fc) {
            ctx->pc = 0x203354u;
            return;
        }
    }
    ctx->pc = 0x203304u;
    // 0x203304: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203308: 0x8c220ab0  lw          $v0, 0xAB0($at)
    ctx->pc = 0x203308u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600AB0u));
    // 0x20330c: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x20330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x203310: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x203310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x203314: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x203314u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x203318: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x203318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x20331c: 0x34640808  ori         $a0, $v1, 0x808
    ctx->pc = 0x20331cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2056);
    // 0x203320: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x203320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x203324: 0x3c031d07  lui         $v1, 0x1D07
    ctx->pc = 0x203324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7431 << 16));
    // 0x203328: 0x34640a00  ori         $a0, $v1, 0xA00
    ctx->pc = 0x203328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2560);
    // 0x20332c: 0x851825  or          $v1, $a0, $a1
    ctx->pc = 0x20332cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x203330: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x203330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x203334: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x203334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x203338: 0x24650dc0  addiu       $a1, $v1, 0xDC0
    ctx->pc = 0x203338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3520));
    // 0x20333c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20333cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203340: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x203340u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203344: 0xc059b14  jal         func_166C50
    ctx->pc = 0x203344u;
    SET_GPR_U32(ctx, 31, 0x20334Cu);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x203344u, 0x20334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20334Cu;
label_20334c:
    // 0x20334c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20334Cu;
    {
        const bool branch_taken_0x20334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20334c) {
            ctx->pc = 0x2033A0u;
            return;
        }
    }
    ctx->pc = 0x203354u;
}
