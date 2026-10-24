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

// Function: Em_cut_init
// Address: 0x1741a0 - 0x174288
void Em_cut_init_0x1741a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em_cut_init_0x1741a0");
#endif

    switch (ctx->pc) {
        case 0x1741d0u: goto label_1741d0;
        case 0x1741ecu: goto label_1741ec;
        default: break;
    }

    ctx->pc = 0x1741a0u;

    // 0x1741a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1741a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1741a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1741a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1741a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1741a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1741ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1741acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1741b0: 0x8c431210  lw          $v1, 0x1210($v0)
    ctx->pc = 0x1741b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4624)));
    // 0x1741b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1741b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1741b8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1741b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1741bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1741bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1741c0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1741c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1741c4: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x1741c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1741c8: 0xc095c94  jal         func_257250
    ctx->pc = 0x1741C8u;
    SET_GPR_U32(ctx, 31, 0x1741D0u);
    ctx->pc = 0x257250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257250u, 0x1741C8u, 0x1741D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741D0u;
label_1741d0:
    // 0x1741d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1741d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1741d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1741d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1741d8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1741d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1741dc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1741dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1741e0: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x1741e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x1741e4: 0xc095c94  jal         func_257250
    ctx->pc = 0x1741E4u;
    SET_GPR_U32(ctx, 31, 0x1741ECu);
    ctx->pc = 0x257250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257250u, 0x1741E4u, 0x1741ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1741ECu;
label_1741ec:
    // 0x1741ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1741ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1741f0: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1741f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1741f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1741f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1741f8: 0x28610010  slti        $at, $v1, 0x10
    ctx->pc = 0x1741f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1741fc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1741FCu;
    {
        const bool branch_taken_0x1741fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1741fc) {
            ctx->pc = 0x17421Cu;
            goto label_17421c;
        }
    }
    ctx->pc = 0x174204u;
    // 0x174204: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x174204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174208: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x174208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x17420c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17420cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x174210: 0x28630017  slti        $v1, $v1, 0x17
    ctx->pc = 0x174210u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x174214: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x174214u;
    {
        const bool branch_taken_0x174214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174214) {
            ctx->pc = 0x174238u;
            goto label_174238;
        }
    }
    ctx->pc = 0x17421Cu;
label_17421c:
    // 0x17421c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17421cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174220: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x174220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174224: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x174224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x174228: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x174228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x17422c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17422cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174230: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x174230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174234: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x174234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
label_174238:
    // 0x174238: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x174238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17423c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x17423cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x174240: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x174240u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x174244: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x174244u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x174248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17424c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17424Cu;
    {
        const bool branch_taken_0x17424c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17424c) {
            ctx->pc = 0x174268u;
            goto label_174268;
        }
    }
    ctx->pc = 0x174254u;
    // 0x174254: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x174254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174258: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x174258u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17425c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x17425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x174260: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x174260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174264: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x174264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_174268:
    // 0x174268: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x174268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17426c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x17426cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x174270: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x174270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x174274: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x174274u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x174278: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x174278u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17427c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17427cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x174280: 0x3e00008  jr          $ra
    ctx->pc = 0x174280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174288u;
}
