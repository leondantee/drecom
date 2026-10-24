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

// Function: entry_00356210
// Address: 0x356210 - 0x356288
void entry_00356210_0x356210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00356210_0x356210");
#endif

    switch (ctx->pc) {
        case 0x35625cu: goto label_35625c;
        default: break;
    }

    ctx->pc = 0x356210u;

    // 0x356210: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x356210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x356214: 0x2442a600  addiu       $v0, $v0, -0x5A00
    ctx->pc = 0x356214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
    // 0x356218: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x356218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35621c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x35621cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356220: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x356220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356224: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x356224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x356228: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x356228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35622c: 0x2442a620  addiu       $v0, $v0, -0x59E0
    ctx->pc = 0x35622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944288));
    // 0x356230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356234: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x356234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356238: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x356238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35623c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x35623cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356240: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x356240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x356244: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x356244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x356248: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x356248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35624c: 0xc7ad0050  lwc1        $f13, 0x50($sp)
    ctx->pc = 0x35624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x356250: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x356250u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356254: 0xc0864b8  jal         func_2192E0
    ctx->pc = 0x356254u;
    SET_GPR_U32(ctx, 31, 0x35625Cu);
    ctx->pc = 0x2192E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2192E0u, 0x356254u, 0x35625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35625Cu;
label_35625c:
    // 0x35625c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x35625cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356260: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x356260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x356264: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x356264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x356268: 0x12230007  beq         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x356268u;
    {
        const bool branch_taken_0x356268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x356268) {
            ctx->pc = 0x356288u;
            return;
        }
    }
    ctx->pc = 0x356270u;
    // 0x356270: 0x96230118  lhu         $v1, 0x118($s1)
    ctx->pc = 0x356270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x356274: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x356274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x356278: 0xa6230118  sh          $v1, 0x118($s1)
    ctx->pc = 0x356278u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x35627c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x356280: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x356280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x356284: 0xa223011c  sb          $v1, 0x11C($s1)
    ctx->pc = 0x356284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x356288u;
}
