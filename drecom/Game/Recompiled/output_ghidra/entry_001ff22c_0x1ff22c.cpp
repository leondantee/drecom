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

// Function: entry_001ff22c
// Address: 0x1ff22c - 0x1ff27c
void entry_001ff22c_0x1ff22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff22c_0x1ff22c");
#endif

    switch (ctx->pc) {
        case 0x1ff254u: goto label_1ff254;
        default: break;
    }

    ctx->pc = 0x1ff22cu;

    // 0x1ff22c: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x1ff22cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff230: 0x91080344  lbu         $t0, 0x344($t0)
    ctx->pc = 0x1ff230u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 836)));
    // 0x1ff234: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x1ff234u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1ff238: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1ff238u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1ff23c: 0x8fb100d8  lw          $s1, 0xD8($sp)
    ctx->pc = 0x1ff23cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff240: 0x2272821  addu        $a1, $s1, $a3
    ctx->pc = 0x1ff240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1ff244: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ff244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ff248: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff24c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FF24Cu;
    SET_GPR_U32(ctx, 31, 0x1FF254u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FF24Cu, 0x1FF254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF254u;
label_1ff254:
    // 0x1ff254: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ff254u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ff258: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff25c: 0x90640344  lbu         $a0, 0x344($v1)
    ctx->pc = 0x1ff25cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1ff260: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FF260u;
    {
        const bool branch_taken_0x1ff260 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1ff260) {
            ctx->pc = 0x1FF27Cu;
            return;
        }
    }
    ctx->pc = 0x1FF268u;
    // 0x1ff268: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ff268u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ff26c: 0x0  nop
    ctx->pc = 0x1ff26cu;
    // NOP
    // 0x1ff270: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1ff270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ff274: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF274u;
    {
        const bool branch_taken_0x1ff274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff274) {
            ctx->pc = 0x1FF298u;
            return;
        }
    }
    ctx->pc = 0x1FF27Cu;
}
