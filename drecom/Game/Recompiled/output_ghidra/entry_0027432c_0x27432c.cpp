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

// Function: entry_0027432c
// Address: 0x27432c - 0x2743b0
void entry_0027432c_0x27432c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027432c_0x27432c");
#endif

    ctx->pc = 0x27432cu;

    // 0x27432c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x27432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274330: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x274330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274334: 0x11aa40  sll         $s5, $s1, 9
    ctx->pc = 0x274334u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x274338: 0x2552021  addu        $a0, $s2, $s5
    ctx->pc = 0x274338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x27433c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27433cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x274340: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x274340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x274344: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x274344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x274348: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27434c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27434cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x274350: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x274350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x274354: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x274354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274358: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x274358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27435c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x27435cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x274360: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x274360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x274364: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274368: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x274368u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x27436c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x27436cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x274370: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x274370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x274374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274378: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x274378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x27437c: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x27437cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x274380: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274384: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274388: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x274388u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27438c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274390: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x274390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x274394: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274394u;
    {
        const bool branch_taken_0x274394 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x274394) {
            ctx->pc = 0x2743B0u;
            return;
        }
    }
    ctx->pc = 0x27439Cu;
    // 0x27439c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27439cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2743a0: 0x0  nop
    ctx->pc = 0x2743a0u;
    // NOP
    // 0x2743a4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2743a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2743a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2743A8u;
    {
        const bool branch_taken_0x2743a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2743a8) {
            ctx->pc = 0x2743CCu;
            return;
        }
    }
    ctx->pc = 0x2743B0u;
}
