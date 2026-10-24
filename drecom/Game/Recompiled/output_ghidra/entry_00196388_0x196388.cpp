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

// Function: entry_00196388
// Address: 0x196388 - 0x196430
void entry_00196388_0x196388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196388_0x196388");
#endif

    ctx->pc = 0x196388u;

    // 0x196388: 0x32c4ffff  andi        $a0, $s6, 0xFFFF
    ctx->pc = 0x196388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x19638c: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x19638cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x196390: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x196390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196394: 0xa4642608  sh          $a0, 0x2608($v1)
    ctx->pc = 0x196394u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9736), (uint16_t)GPR_U32(ctx, 4));
    // 0x196398: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x19639c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x19639cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1963a0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1963a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1963a4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1963a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1963a8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1963ac: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x1963acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x1963b0: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1963b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1963b4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1963b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1963b8: 0xdc642208  ld          $a0, 0x2208($v1)
    ctx->pc = 0x1963b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8712)));
    // 0x1963bc: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x1963bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x1963c0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1963c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1963c4: 0xfc642408  sd          $a0, 0x2408($v1)
    ctx->pc = 0x1963c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 9224), GPR_U64(ctx, 4));
    // 0x1963c8: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x1963c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x1963cc: 0x3063ff7f  andi        $v1, $v1, 0xFF7F
    ctx->pc = 0x1963ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65407);
    // 0x1963d0: 0xa6630036  sh          $v1, 0x36($s3)
    ctx->pc = 0x1963d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x1963d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1963d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1963d8: 0x8e750038  lw          $s5, 0x38($s3)
    ctx->pc = 0x1963d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1963dc: 0x96630036  lhu         $v1, 0x36($s3)
    ctx->pc = 0x1963dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x1963e0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1963e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1963e4: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1963e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1963e8: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1963e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1963ec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1963ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1963f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1963f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1963f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1963f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1963f8: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1963f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1963fc: 0x8eb70010  lw          $s7, 0x10($s5)
    ctx->pc = 0x1963fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x196400: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x196400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x196404: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x196404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x196408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19640c: 0x2e32014  dsllv       $a0, $v1, $s7
    ctx->pc = 0x19640cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (GPR_U32(ctx, 23) & 0x3F));
    // 0x196410: 0xdca32208  ld          $v1, 0x2208($a1)
    ctx->pc = 0x196410u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8712)));
    // 0x196414: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x196414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x196418: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x196418u;
    {
        const bool branch_taken_0x196418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196418) {
            ctx->pc = 0x196430u;
            return;
        }
    }
    ctx->pc = 0x196420u;
    // 0x196420: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x196420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x196424: 0x16e3007b  bne         $s7, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x196424u;
    {
        const bool branch_taken_0x196424 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x196424) {
            ctx->pc = 0x196614u;
            return;
        }
    }
    ctx->pc = 0x19642Cu;
    // 0x19642c: 0x0  nop
    ctx->pc = 0x19642cu;
    // NOP
    ctx->pc = 0x196430u;
}
