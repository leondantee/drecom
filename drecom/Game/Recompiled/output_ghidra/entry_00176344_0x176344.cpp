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

// Function: entry_00176344
// Address: 0x176344 - 0x1763b0
void entry_00176344_0x176344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176344_0x176344");
#endif

    ctx->pc = 0x176344u;

    // 0x176344: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x176344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x176348: 0x9023cc94  lbu         $v1, -0x336C($at)
    ctx->pc = 0x176348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x47CC94u));
    // 0x17634c: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x17634cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x176350: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x176350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x176354: 0x3ac3c  dsll32      $s5, $v1, 16
    ctx->pc = 0x176354u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176358: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x176358u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x17635c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17635cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176360: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176360u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176364: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x176364u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176368: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x176368u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
    // 0x17636c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17636cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176370: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176374: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x176374u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176378: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x176378u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x17637c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176380: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x176380u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x176384: 0x3a43c  dsll32      $s4, $v1, 16
    ctx->pc = 0x176384u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 16));
    // 0x176388: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x176388u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x17638c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17638cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176390: 0x0  nop
    ctx->pc = 0x176390u;
    // NOP
    // 0x176394: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x176394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x176398: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x176398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x17639c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x17639cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1763a0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1763a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1763a4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1763a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1763a8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x1763A8u;
    {
        const bool branch_taken_0x1763a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1763a8) {
            ctx->pc = 0x176710u;
            return;
        }
    }
    ctx->pc = 0x1763B0u;
}
