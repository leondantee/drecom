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

// Function: entry_0022b1fc
// Address: 0x22b1fc - 0x22b2c8
void entry_0022b1fc_0x22b1fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b1fc_0x22b1fc");
#endif

    switch (ctx->pc) {
        case 0x22b244u: goto label_22b244;
        case 0x22b26cu: goto label_22b26c;
        default: break;
    }

    ctx->pc = 0x22b1fcu;

    // 0x22b1fc: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b200: 0x90a309e7  lbu         $v1, 0x9E7($a1)
    ctx->pc = 0x22b200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2535)));
    // 0x22b204: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x22B204u;
    {
        const bool branch_taken_0x22b204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b204) {
            ctx->pc = 0x22B2C8u;
            return;
        }
    }
    ctx->pc = 0x22B20Cu;
    // 0x22b20c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b210: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b214: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x22b214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x22b218: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22b218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22b21c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b220: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x22b220u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x22b224: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b228: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x22b228u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b22c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b230: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x22b230u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b234: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b238: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x22b238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x22b23c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B23Cu;
    SET_GPR_U32(ctx, 31, 0x22B244u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B23Cu, 0x22B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B244u;
label_22b244:
    // 0x22b244: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x22b244u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22b248: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22b248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22b24c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x22b24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x22b250: 0x2466003c  addiu       $a2, $v1, 0x3C
    ctx->pc = 0x22b250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x22b254: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x22b254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x22b258: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22b258u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x22b25c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b260: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x22b260u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x22b264: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B264u;
    SET_GPR_U32(ctx, 31, 0x22B26Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B264u, 0x22B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B26Cu;
label_22b26c:
    // 0x22b26c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x22b26cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22b270: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x22b270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x22b274: 0x30e8003f  andi        $t0, $a3, 0x3F
    ctx->pc = 0x22b274u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
    // 0x22b278: 0x250300b4  addiu       $v1, $t0, 0xB4
    ctx->pc = 0x22b278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 180));
    // 0x22b27c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x22b27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x22b280: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x22b280u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x22b284: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b288: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22b288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b28c: 0xa464005c  sh          $a0, 0x5C($v1)
    ctx->pc = 0x22b28cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 92), (uint16_t)GPR_U32(ctx, 4));
    // 0x22b290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22b290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22b294: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x22b294u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x22b298: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x22b298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x22b29c: 0x34647fff  ori         $a0, $v1, 0x7FFF
    ctx->pc = 0x22b29cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x22b2a0: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x22b2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x22b2a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x22b2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x22b2a8: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x22b2a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x22b2ac: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b2b0: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x22b2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b2b4: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x22b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22b2b8: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x22b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x22b2bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x22b2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x22b2c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22b2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x22b2c4: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x22b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    ctx->pc = 0x22b2c8u;
}
