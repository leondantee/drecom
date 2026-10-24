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

// Function: entry_0032a4e8
// Address: 0x32a4e8 - 0x32a58c
void entry_0032a4e8_0x32a4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a4e8_0x32a4e8");
#endif

    switch (ctx->pc) {
        case 0x32a55cu: goto label_32a55c;
        default: break;
    }

    ctx->pc = 0x32a4e8u;

    // 0x32a4e8: 0x82022820  lb          $v0, 0x2820($s0)
    ctx->pc = 0x32a4e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a4ec: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x32a4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x32a4f0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32a4f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32a4f4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x32a4f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32a4f8: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x32A4F8u;
    {
        const bool branch_taken_0x32a4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a4f8) {
            ctx->pc = 0x32A404u;
            return;
        }
    }
    ctx->pc = 0x32A500u;
    // 0x32a500: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x32a500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x32a504: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x32a504u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32a508: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x32a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x32a50c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x32A50Cu;
    {
        const bool branch_taken_0x32a50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a50c) {
            ctx->pc = 0x32A58Cu;
            return;
        }
    }
    ctx->pc = 0x32A514u;
    // 0x32a514: 0x866213ac  lh          $v0, 0x13AC($s3)
    ctx->pc = 0x32a514u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5036)));
    // 0x32a518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a51c: 0x0  nop
    ctx->pc = 0x32a51cu;
    // NOP
    // 0x32a520: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32a520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a524: 0x866213ae  lh          $v0, 0x13AE($s3)
    ctx->pc = 0x32a524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 5038)));
    // 0x32a528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a52c: 0x0  nop
    ctx->pc = 0x32a52cu;
    // NOP
    // 0x32a530: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a534: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x32a534u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x32a538: 0x82022820  lb          $v0, 0x2820($s0)
    ctx->pc = 0x32a538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a53c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32a53cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a540: 0x0  nop
    ctx->pc = 0x32a540u;
    // NOP
    // 0x32a544: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32a544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32a548: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32a548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a54c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x32a54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x32a550: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x32a550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32a554: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x32A554u;
    SET_GPR_U32(ctx, 31, 0x32A55Cu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x32A554u, 0x32A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A55Cu;
label_32a55c:
    // 0x32a55c: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x32a55cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32a560: 0x82032820  lb          $v1, 0x2820($s0)
    ctx->pc = 0x32a560u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a564: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x32a564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32a568: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x32a568u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x32a56c: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x32a56cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32a570: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x32A570u;
    {
        const bool branch_taken_0x32a570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a570) {
            ctx->pc = 0x32A634u;
            return;
        }
    }
    ctx->pc = 0x32A578u;
    // 0x32a578: 0x82032820  lb          $v1, 0x2820($s0)
    ctx->pc = 0x32a578u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 10272)));
    // 0x32a57c: 0x3a63c  dsll32      $s4, $v1, 24
    ctx->pc = 0x32a57cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32a580: 0x14a63f  dsra32      $s4, $s4, 24
    ctx->pc = 0x32a580u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 24));
    // 0x32a584: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x32A584u;
    {
        const bool branch_taken_0x32a584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a584) {
            ctx->pc = 0x32A634u;
            return;
        }
    }
    ctx->pc = 0x32A58Cu;
}
