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

// Function: entry_0022b920
// Address: 0x22b920 - 0x22b9f4
void entry_0022b920_0x22b920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b920_0x22b920");
#endif

    switch (ctx->pc) {
        case 0x22b974u: goto label_22b974;
        case 0x22b99cu: goto label_22b99c;
        default: break;
    }

    ctx->pc = 0x22b920u;

    // 0x22b920: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b924: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x22b924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x22b928: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x22B928u;
    {
        const bool branch_taken_0x22b928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b928) {
            ctx->pc = 0x22B9F4u;
            return;
        }
    }
    ctx->pc = 0x22B930u;
    // 0x22b930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b934: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b938: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22b938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22b93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b940: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b944: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x22b944u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x22b948: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22b948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b94c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b950: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22b950u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22b954: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b958: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x22b958u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b95c: 0x8fa700b8  lw          $a3, 0xB8($sp)
    ctx->pc = 0x22b95cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b960: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x22b960u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b964: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b968: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22b968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22b96c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B96Cu;
    SET_GPR_U32(ctx, 31, 0x22B974u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B96Cu, 0x22B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B974u;
label_22b974:
    // 0x22b974: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22b974u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22b978: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x22b978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x22b97c: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x22b97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x22b980: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x22b980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x22b984: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x22b984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x22b988: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x22b988u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x22b98c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b990: 0xa4451278  sh          $a1, 0x1278($v0)
    ctx->pc = 0x22b990u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 5));
    // 0x22b994: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B994u;
    SET_GPR_U32(ctx, 31, 0x22B99Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B994u, 0x22B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B99Cu;
label_22b99c:
    // 0x22b99c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x22b99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22b9a0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x22b9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x22b9a4: 0x246400b4  addiu       $a0, $v1, 0xB4
    ctx->pc = 0x22b9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x22b9a8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x22b9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x22b9ac: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x22b9acu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x22b9b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b9b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b9b8: 0xa465005c  sh          $a1, 0x5C($v1)
    ctx->pc = 0x22b9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x22b9bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22b9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22b9c0: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x22b9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22b9c4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x22b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x22b9c8: 0x34837fff  ori         $v1, $a0, 0x7FFF
    ctx->pc = 0x22b9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32767);
    // 0x22b9cc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x22b9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x22b9d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22b9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22b9d4: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22b9d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22b9d8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b9dc: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22b9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b9e0: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22b9e4: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x22b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x22b9e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22b9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22b9ec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x22b9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22b9f0: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22b9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x22b9f4u;
}
