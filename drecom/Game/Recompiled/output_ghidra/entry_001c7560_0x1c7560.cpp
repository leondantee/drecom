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

// Function: entry_001c7560
// Address: 0x1c7560 - 0x1c75f4
void entry_001c7560_0x1c7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7560_0x1c7560");
#endif

    switch (ctx->pc) {
        case 0x1c75c0u: goto label_1c75c0;
        case 0x1c75ecu: goto label_1c75ec;
        default: break;
    }

    ctx->pc = 0x1c7560u;

    // 0x1c7560: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7564: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1c7564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c7568: 0x3c038040  lui         $v1, 0x8040
    ctx->pc = 0x1c7568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32832 << 16));
    // 0x1c756c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c756cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c7570: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1c7570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1c7574: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7578: 0x84c31278  lh          $v1, 0x1278($a2)
    ctx->pc = 0x1c7578u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4728)));
    // 0x1c757c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C757Cu;
    {
        const bool branch_taken_0x1c757c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c757c) {
            ctx->pc = 0x1C75F4u;
            return;
        }
    }
    ctx->pc = 0x1C7584u;
    // 0x1c7584: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7588: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x1c7588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x1c758c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1c758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1c7590: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x1c7590u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c7594: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7598: 0x8c8313e8  lw          $v1, 0x13E8($a0)
    ctx->pc = 0x1c7598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x1c759c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C759Cu;
    {
        const bool branch_taken_0x1c759c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c759c) {
            ctx->pc = 0x1C75F4u;
            return;
        }
    }
    ctx->pc = 0x1C75A4u;
    // 0x1c75a4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c75a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c75a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c75ac: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c75acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c75b0: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x1c75b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x1c75b4: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1c75b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c75b8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x1C75B8u;
    SET_GPR_U32(ctx, 31, 0x1C75C0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x1C75B8u, 0x1C75C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75C0u;
label_1c75c0:
    // 0x1c75c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c75c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c75c4: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x1c75c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x1c75c8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c75c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c75cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c75d0: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x1c75d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x1c75d4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1c75d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c75d8: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1c75d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c75dc: 0xc4cc1290  lwc1        $f12, 0x1290($a2)
    ctx->pc = 0x1c75dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c75e0: 0xc48d00d4  lwc1        $f13, 0xD4($a0)
    ctx->pc = 0x1c75e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c75e4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1C75E4u;
    SET_GPR_U32(ctx, 31, 0x1C75ECu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1C75E4u, 0x1C75ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C75ECu;
label_1c75ec:
    // 0x1c75ec: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c75f0: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1c75f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
    ctx->pc = 0x1c75f4u;
}
