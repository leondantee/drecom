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

// Function: entry_001f44b8
// Address: 0x1f44b8 - 0x1f4578
void entry_001f44b8_0x1f44b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f44b8_0x1f44b8");
#endif

    ctx->pc = 0x1f44b8u;

    // 0x1f44b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f44b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f44bc: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x1f44bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x1f44c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f44c4: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x1f44c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f44c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f44cc: 0x8464127a  lh          $a0, 0x127A($v1)
    ctx->pc = 0x1f44ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1f44d0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1f44d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1f44d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f44d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f44d8: 0x286100a1  slti        $at, $v1, 0xA1
    ctx->pc = 0x1f44d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)161) ? 1 : 0);
    // 0x1f44dc: 0x14200064  bnez        $at, . + 4 + (0x64 << 2)
    ctx->pc = 0x1F44DCu;
    {
        const bool branch_taken_0x1f44dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f44dc) {
            ctx->pc = 0x1F4670u;
            return;
        }
    }
    ctx->pc = 0x1F44E4u;
    // 0x1f44e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f44e8: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x1f44e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x1f44ec: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1f44ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f44f0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1f44f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1f44f4: 0x28a1012c  slti        $at, $a1, 0x12C
    ctx->pc = 0x1f44f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)300) ? 1 : 0);
    // 0x1f44f8: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x1F44F8u;
    {
        const bool branch_taken_0x1f44f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f44f8) {
            ctx->pc = 0x1F4670u;
            return;
        }
    }
    ctx->pc = 0x1F4500u;
    // 0x1f4500: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f4504: 0x8c240a90  lw          $a0, 0xA90($at)
    ctx->pc = 0x1f4504u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x600A90u));
    // 0x1f4508: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1f4508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1f450c: 0x34430011  ori         $v1, $v0, 0x11
    ctx->pc = 0x1f450cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x1f4510: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F4510u;
    {
        const bool branch_taken_0x1f4510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f4510) {
            ctx->pc = 0x1F4578u;
            return;
        }
    }
    ctx->pc = 0x1F4518u;
    // 0x1f4518: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f451c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4520: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f4524: 0x8c220a90  lw          $v0, 0xA90($at)
    ctx->pc = 0x1f4524u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A90u));
    // 0x1f4528: 0xc4410090  lwc1        $f1, 0x90($v0)
    ctx->pc = 0x1f4528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f452c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4530: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f4530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f4534: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x1f4534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x1f4538: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f453c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4540: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f4544: 0x8c220a90  lw          $v0, 0xA90($at)
    ctx->pc = 0x1f4544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A90u));
    // 0x1f4548: 0xc4410094  lwc1        $f1, 0x94($v0)
    ctx->pc = 0x1f4548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f454c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4550: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f4550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f4554: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x1f4554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x1f4558: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f4558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f455c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f4560: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1f4560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1f4564: 0x8c220a90  lw          $v0, 0xA90($at)
    ctx->pc = 0x1f4564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x600A90u));
    // 0x1f4568: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x1f4568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f456c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1f456cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4570: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f4570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f4574: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f4574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    ctx->pc = 0x1f4578u;
}
